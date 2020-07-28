#include <iostream>
#include "StringTokenizer.h"
#include "StringTokenizerOperations.h"
using namespace std;
char * stringTokenizer(char *str, const char * delim)
{
	int delimIndex = findDelimeter(str, delim);
	if (delimIndex!=-1)
	{
		char *token = new char[delimIndex + 1];
		copyToken(token, str, delimIndex);
		resizeString(str, delimIndex);
		return token;
	}
	else
	{
		char *token = new char[1];
		copyToken(token, str, delimIndex);
		resizeString(str, delimIndex);
		return token;
	}

}
