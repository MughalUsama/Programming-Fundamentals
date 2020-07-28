#include <iostream>
#include "MyString.h";
using namespace std;


int removeSubString(char * destination, char * source, int index)
{
	int substringIndex = findSubString(destination, source, index);
	if (substringIndex==-1)
	{
		return -1;
	}
	else
	{
		int sourceLength = getStringLength(source);
		int i = substringIndex;
		while (destination[i + sourceLength] != '\0')
		{
			destination[i] = destination[i + sourceLength];
			i = i + 1;
		}
		destination[i] = destination[i + sourceLength];
		return getStringLength(destination);
	}
}


//to get index of substring
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

//to get length of substring
int getStringLength(char * name)
{
	int  length = 0;

	while (name[length] != '\0')
	{
		length = length + 1;
	}
	return length;
}