#include <iostream>
#include <string>
#include <fstream> // for files and etc
#include "ncurses.h"
using namespace std;
// this is just a pseudo code where i can make things that can help me learn a litte by little
// put ncurses here
int ncursesTest()
{
	initscr();
	printw("Meow moew");
	refresh();
	getch();
	endwin();

	//TODO
}
int user, stringchars, other, input, output;
ofstream file;
string filename;
int length;
int openingafile()
{
	ofstream file;
	file.open(filename);
	file << "" << endl; // this is going to create an empty file.. but it doesnt work :P
	file.close();
	return 0;
}
int bufferTest()
{

	char* buffer = new char[length];
	delete[] buffer;
	return 0;
}

//while(!file == is_open())
//{
//	return -1; // if it fails to open a file that the user has chosen
	
//}

int main()
{
	ncursesTest();
	ofstream file;
	file.open("psudeocode.txt", ios::in | ofstream::out | ofstream::app);
	file << "this is a testy thingy!" << endl; // this is going to create an empty file.. but it doesnt work :P
	file.close();

	bufferTest();
	cout << "Hello world" << endl;
	return 0;
}
