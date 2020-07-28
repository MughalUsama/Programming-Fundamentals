#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char searchDestination[50] = "Islamabad is the capital of Pakistan.";
	char key[30] = "of";
	int index = findSubString(searchDestination, key);

	index == -1 ? cout << "String Not Found." : cout << "The index of First Character of substring is " << index;

	cout << "\n";
	system("pause");
	return 0;
}
