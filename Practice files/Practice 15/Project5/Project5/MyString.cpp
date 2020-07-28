#include <iostream>
#include "MyString.h";
using namespace std;



int convertToInteger(char * source)
{
	int lengthOfString = getStringLength(source);

	int multiplier = 1;
	int integerNumber = 0;
	for (int i = lengthOfString-1; i >= 0; i=i-1)
	{
		if (source[i]!='-')
		{
			int digit = source[i] - 48;
			integerNumber = integerNumber + (digit*multiplier);
			multiplier = multiplier * 10;
		}
		else
		{
			integerNumber = (-integerNumber);
		}
	}
	return integerNumber;
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