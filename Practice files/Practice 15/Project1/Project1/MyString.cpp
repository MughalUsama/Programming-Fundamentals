#include <iostream>
#include "MyString.h";
using namespace std;


void concatenate(char * destination, char * source)
{
	int i = getStringLength(destination);
	int j = 0;
	while (source[j] != '\0')
	{
		destination[i] = source[j];
		i = i + 1;
		j = j + 1;
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