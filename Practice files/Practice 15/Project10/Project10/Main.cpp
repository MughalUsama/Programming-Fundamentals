#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char searchDestination[50] = "Islamabad is the capital of Pakistan.";
	removeSubString(searchDestination , 4);
	cout << searchDestination;
	cout << "\n";
	system("pause");
	return 0;
}
