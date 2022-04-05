/**
*
*   Author: 	jay.dnb@outlook.in
*   Created: 	08.11.2020 UTC+5:30
*
*   UNIX CPP scipt to generate a square spiral with a given unit character. 
*   Synopsis: ~$ ./autospiral "<char unit>" <int array_size>
*
**/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "unistd.h"

#define ARR 1000
#define _UNIT 1
#define _SPC 0
#define _NULL 2

using namespace std;

int s;
char ch;

int ret(int i)
{
	if(i==1) return s;
	else return s-2*(ceil(i/2)-1)-1;
}

void progress()
{
	char ld[]={'|', '/', '\\'};
	cout<<endl;
	
	for (int i=0; i<=s/2; i++)
	{
		cout<<"DOT \""<<ch<<"\" | ARRAY_SIZE "<<s<<" | Preparing grid... "<<ld[i%3];
		cout.flush();
		usleep(300*1000);
		cout<<'\r';
	}
	
	for (int i=0; i<50; i++)
	cout<<" "; cout<<'\r';
}
    
int main(int argc, char* argv[])
{
	
	int i=1, px=0, py=0, run, a[ARR][ARR];
	
	ch=argv[1][0];
	s=stoi(argv[2]);
	
	progress();

	for (int x=0; x<=ARR-1; x++)
		for (int y=0; y<=ARR-1; y++)
			a[x][y]=_NULL;
			
    for (int x=0; x<=s; x++)
		for (int y=0; y<=s; y++)
			a[x][y]=_SPC;
	
	for (i=1; i<=s; i++)
	{
		if(i%4==0) for (run=ret(i); run>0; run--) { py--; a[py][px]=_UNIT; }
		
		if(i%4==1) for (run=ret(i); run>0; run--) { px++; a[py][px]=_UNIT; }
		
		if(i%4==2) for (run=ret(i); run>0; run--) { py++; a[py][px]=_UNIT; }
		
		if(i%4==3) for (run=ret(i); run>0; run--) { px--; a[py][px]=_UNIT; }
	}

	for(int x=0; x<=ARR-1; x++)
	{
		for(int y=0; y<=ARR-1; y++)
		    if(a[x][y]==_SPC) cout<<" ";
		    else if(a[x][y]==_UNIT) cout<<ch;
		if(a[x][s]!=_NULL) cout<<endl;
	}
	
	cout<<"DOT \""<<ch<<"\" | ARRAY_SIZE "<<s<<" | Preparing grid... "<<"Render completed.\n";
}
