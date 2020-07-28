#include <iostream>
#include "MyString.h";
using namespace std;


void removeSubString(char * destination, int count)
{
	int j = getStringLength(destination);
	if (count < 0)
	{
		for (int i = j; i > j+count; i=i-1)
		{
			destination[i-1] = destination[i];
		}
	
	}
	else
	{
		for (int l = 1; l <= count; l=l+1)
		{
			for (int k = 0; k <= j; k=k+1)
			{
				destination[k] = destination[k + 1];
			}
		}
	}
	
}

int getStringLength(char * stringNumber)
{
	int index = 0, length = 0;

	while (stringNumber[index] != '\0')
	{
		length = length + 1;
		index = index + 1;
	}
	return length;
}
