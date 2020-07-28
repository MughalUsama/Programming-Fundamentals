#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char destination[50] = "Program to remove substring.";
	char key[30] = "sub";
	int length = removeSubString(destination, key, 0);

	length == -1 ? cout << "Substring Not Found." : cout << "The length of string after removing \"" << key <<"\" is "<< length;

	cout << "\n";
	system("pause");
	return 0;
}
