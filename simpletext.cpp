#include <iostream>
#include <string>
#include <fstream>
/*
	MAKE THIS TEXT EDITOR AS SMALL AS POSSIBLE WITH THE FUNCTIONALITY IN MIND
	THANK YOU VERY MUCH AND MAKE SURE YOU PUT ALOT OF COMMENTS SO POEPLE CAN
	UNDERSTAND BETTER!
	Instructions!
	1. Make the main-function
	2. Make the program open a empty file.
	3. Make the program save the file that has been written
	4. Make the program close and exit.
	5. Done.
*/
// make functions like saving or exiting or something. i dont know
std::ofstream file; // initialize the file name or something or the function
std::string filename = "otherfile";
int length;
int userInput()
{
	int user, output, input, otherinput;
	
	std::cin >> user;
	std::cout << user << std::endl;
	// TODO
}
int createBuffer()
{
	char* buffer = new char[length];
	delete[] buffer;
	
	
	// TODO
}
int saveFile()
{
	//TODO
}
int openFile()
{
	
}
int exitFile()
{
	// TODO
}
int main()
{
	//std::filename.open("testfile.txt", std::ios::in);
	file.close();
	return 0;
}
