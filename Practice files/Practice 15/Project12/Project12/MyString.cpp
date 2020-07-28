#include <iostream>
#include "MyString.h";
using namespace std;


int removeSubString(char * destination, char ch, int index)
{
	int removedCharacters = 0;
	while (destination[index] != '\0')
	{
		if (destination[index]==ch)
		{
			int temp = index;
			while (destination[temp]!='\0')
			{
				destination[temp] = destination[temp + 1];
				temp = temp + 1;
			}
			destination[temp] = destination[temp + 1];
			removedCharacters = removedCharacters + 1;
		}

		index = index + 1;
	}
	destination[index] = destination[index + 1];
	return removedCharacters;
}

