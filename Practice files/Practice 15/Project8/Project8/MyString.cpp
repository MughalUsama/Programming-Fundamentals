#include <iostream>
#include "MyString.h";
using namespace std;



int findSubString(char * destination, char key, int start)
{
	int index = start;

	while ((int)(destination[index])!= (int) key && destination[index]!='\0')
	{
		index = index + 1;
	}
	if (destination[index] != '\0')
	{
		return -1; // if character not found
	}
	else
	{
		return index;
	}
}


