#include <iostream>
#include "AnagramTellingApp.h"

using namespace std;

bool isAnagram(char * string1, char * string2)
{
	int currentIndex = 0;
	while (string1[currentIndex] != '\0')
	{
		if (countOccurence(string1, string1[currentIndex]) != countOccurence(string2, string1[currentIndex]))
		{
			return false;
		}
		currentIndex = currentIndex + 1;
	}
	if (string2[currentIndex] == '\0')
	{
		return true;
	}
	return false;
}

// to count occurence of character
int countOccurence(char *string, char ch)
{
	int index = 0, noOfOccurence = 0;
	while (string[index] != '\0')
	{
		if (string[index] == ch)
		{
			noOfOccurence = noOfOccurence + 1;
		}
		index = index + 1;
	}
	return noOfOccurence;
}