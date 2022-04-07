#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main ()
{
	system ("echo $(pkg-config --cflags --libs gtkmm-3.0)# >> .x~");  // the shell command to write to a temporary file
	fstream file (".x~", ios::in);					// fstream object linked to the file ".x~"
	char str[100000], temp[100], substr[1000][100];			
	int substr_ctrl_index = 0;					
	
	// str will contain the operand string from the file,
	// temp will contain the post-string of -I until space is encountered
	// substring to keep dumping the contents of temp into
	// substr_ctrl_index to control which location i of substr[i][j] temp string is dumped into
	
	file.getline (str, 100000, '#');	// string extracted from file
	cout << "Operand string:\n\n";
	cout << str;
	
	for (int i = 0; i <  strlen (str); i++)
		if (str[i] == '-' && str[i + 1] == 'I')		// looking for '-I'
		{
			for (int j = i + 2; str[j] != ' '; j++)
			{
				char y[] = { str[j], '\0' };
				strcat (temp, y);		// temp acts as a temporary dump while it is in this loop receiving the chars. of the -I poststring
			}
			
			strcpy (substr[substr_ctrl_index], temp);	// dumping
			substr_ctrl_index++;				// updating (incrementing) index to receive the next dump
			strcpy (temp, "");				// reinitializing temp
		}
	
	cout << "\n\n JSON translation: \n\n";

	// displaying the file the way I want
	for (int i = 0; i <= substr_ctrl_index - 1 ; i++)
		cout << "\"" << substr[i] << "\"" << ((i != substr_ctrl_index - 1) ? ", " : "");
	
	cout << endl;		
	file.close (); // closing the file
	remove ("x");	// deleting the file
	return 0;
}
