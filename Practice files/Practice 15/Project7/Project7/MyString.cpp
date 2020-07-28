#include <iostream>
#include "MyString.h";
using namespace std;



int findSubString(char * destination, char * key, int start)
{
	while (destination[start] != '\0')
	{
		int index = 0, temp = start;
		while (key[index] != '\0' && destination[start] == key[index])
		{
			start = start + 1;
			index = index + 1;
		}

		if (key[index] == '\0')
		{
			return temp;
		}
		start = temp + 1;
	}
	return -1;
}
