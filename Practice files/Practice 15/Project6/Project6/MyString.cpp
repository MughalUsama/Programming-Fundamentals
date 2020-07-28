#include <iostream>
#include "MyString.h";
using namespace std;



float convertToFloat(char * source)
{
	float nonFractional = 0, fractional = 0;
	int multiplier = 1, divisor = 10;
	int indexOfPoint = getIndexOfPoint(source);
	for (int i = indexOfPoint -1; i >= 0; i=i-1)
	{
		if (source[i]!='-')
		{
			nonFractional = nonFractional + ((source[i] - 48) * multiplier);
			multiplier = multiplier * 10;
		}

	}
	for (int i = indexOfPoint + 1; source[i]!='\0' ; i = i + 1)
	{
		fractional = fractional + ((source[i] - 48.0) / divisor);
		divisor = divisor * 10;
	}
	if (source[0]=='-')
	{
		return -(fractional + nonFractional);
	}
	return (fractional + nonFractional);
}


int getIndexOfPoint(char * number)
{
	int index = 0;
	while (number[index]!='.' && number[index] != '\0')
	{
		index = index + 1;
	}
	return index;
}