#include <iostream>
#include "AnagramTellingApp.h"
using namespace std;


int main()
{

	char string1[30] = "abbc", string2[30]="cabb";
	if (isAnagram(string1, string2))
	{
		cout << "Both strings are anagram of each other.";
	}
	else
	{
		cout << "Both strings are \'NOT\' anagram of each other.";
	}

	cout << "\n";
	system("pause");
	return 0;
}


