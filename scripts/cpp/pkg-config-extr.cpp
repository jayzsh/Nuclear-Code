#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main ()
{
	string str = "", temp = "", cmd = "";
	vector<string> substr;
	
	cout <<"Enter pkg-config command (eg. without quotes -> \"pkg-config --cflags --libs gtkmm-3.0\"):\n\n > ";
	getline (cin, cmd);
	cmd = "echo $(" + cmd + ") >> .x~";
	
	system (cmd);
	fstream file (".x~", ios::in);
	
	getline (file, str);	// yayy
	cout << "Operand string:\n\n" << str;
	
	for (int i = 0; i < str.length() - 2; i++)
		if (str.at (i) == '-' && str.at (i + 1) == 'I')
		{
			for (int j = i + 2; str.at (j) != ' '; j++)
				temp.push_back (str.at (j));
			
			substr.push_back (temp);
			temp = "";
		}
	
	cout << "\n\nJSON translation:\n\n";

	for (int i = 0; i < substr.size (); i++)
		cout << "\"" << substr.at (i) << "\"" << ((i != substr.size () - 1) ? ", " : "");
		
	cout << endl;
	file.close ();
	remove (".x~");
	return 0;
}
