/**
*
*   Author: 	jay.dnb@outlook.in
*   Created: 	08.11.2020 UTC+5:30
*
*   UNIX CPP scipt to animate a terminal progress bar. 
*   Synopsis: ~$ ./progressbar
*
**/

#include <iostream>
#include "unistd.h"

using namespace std;

int main()
{
	cout << "[";
	
	for (int i=0; i<50; i++)
	{
		cout << "\r[";
		for (int j=0; j<=i; j++) cout << "#";    // character for showing %age completed
		for (int k=i+1; k<50; k++) cout << " ";  // character for showing %age remaining
		cout << "]";
		cout.flush();
		usleep(100*1000); // pausing for 100ms before every unit growth
	}
	
	cout << endl << "Done." << endl;
	
	return 0;
}
