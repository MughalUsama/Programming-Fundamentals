#include <iostream>
#include "MyString.h";
using namespace std;


void trim(char * destination)
{
	int index = 0;
	while (destination[index] == ' ')
	{
		int temp = index;
		while (destination[temp] != '\0')
		{
			destination[temp] = destination[temp + 1];
			temp = temp + 1;
		}
		destination[temp] = destination[temp + 1];
	}

	//getting index of character before null
	index = getStringLength(destination) - 1;
	while (destination[index] == ' ')
	{
		// saving null in 2nd last character i.e space.
		destination[index] = destination[index + 1];
		index = index - 1;

	}
}


// to get length of string

int getStringLength(char * name)
{
	int length = 0;

	while (name[length] != '\0')
	{
		length = length + 1;
	}
	return length;
}

