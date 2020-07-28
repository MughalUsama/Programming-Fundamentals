#include <iostream>
#include "MyString.h";
using namespace std;


void insertString(char * destination, int index, char ch)
{
	int stringLength = getStringLength(destination);   //getting length to find last index
	for (int i = stringLength; i >= index ; i = i - 1)
	{
		destination[i] = destination[i - 1];
	}
	destination[index] = ch;
}

int getStringLength(char * destination)
{
	int index = 0, length = 0;

	while (destination[index] != '\0')
	{
		length = length + 1;
		index = index + 1;
	}
	return length;
}
