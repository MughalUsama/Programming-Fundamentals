#include <iostream>
#include "MyString.h";
using namespace std;


void insertString(char * destination, char * source, int index)
{
	int sourceLength = getStringLength(source);
	int destinationLength = getStringLength(destination);
	for (int i = destinationLength; i >= index; i=i-1)
	{
		destination[i + sourceLength] = destination[i];
	}

	for (int j = 0; j < sourceLength; j = j + 1)
	{

		destination[index] = source[j];
		index = index + 1;
	}

	cout << destination;
	
}

int getStringLength(char * name) // calculating length
{
	int index = 0, length = 0;

	while (name[index] != '\0')
	{
		length = length + 1;
		index = index + 1;
	}
	return length;
}