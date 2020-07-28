#include <iostream>
#include "StringTokenizerOperations.h"
using namespace std;

int findDelimeter(char *str, const char * delim)
{
	int i = 0;
	for (int i = 0; str[i] != '\0'; i = i + 1)
	{
		int j = 0;
		while (delim[j] != '\0')
		{
			if (str[i] == delim[j])
			{
				return i;
			}
			j = j + 1;
		}
		
	}
	return -1;
}

void copyToken(char * token, char *str, int delimIndex)
{
	for (int i = 0; i <delimIndex; i = i + 1)
	{
		token[i] = str[i];
	}
	if (delimIndex==-1)
	{
		token[0] = '\0';
	}
	else
	{
		token[delimIndex] = '\0';
	}
}

void resizeString(char *str, int delimIndex)
{
	for (int i = 0; str[i+delimIndex] !='\0' ; i=i+1)
	{
		str[i] = str[i + delimIndex+1];
	}
}
