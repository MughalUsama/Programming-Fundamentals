#include <iostream>
#include "MyString.h";
using namespace std;



void copyString(char * destination, char * source)
{
	int i = 0, j = 0;
	while (source[i]!='\0')
	{
		destination[j] = source[i];
		i = i + 1;
		j = j + 1;
	}
}
