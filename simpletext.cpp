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
int length;
int userInput(void)
{
	
	// TODO
}
int createBuffer()
{
	const char* buffer = new char[length];
	delete[] buffer;
	if(!file.rdbuf())// read the buffers or something. I DONT KNOW ANYMORE!
	{
		std::cout << "the rdbuf thingy worked!" << std::endl;
		return 0;

	}
			
	
	// TODO
}
int saveFile()
{
	//TODO! MAKE DAMN SAVE FILES BUT NOT RIGHT NOW
}
int exitFiletest()
{
	// TODO
}
int main()
{
	file.open("test.txt");// std::ios::out | std::ios::in);
	file << "hello world this is just a test dont worry \n";
	file.close();

	return 0;
}
