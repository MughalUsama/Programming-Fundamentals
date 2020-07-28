#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char destination[50] = "Program to remove substring.";
	char ch = 'm';
	cout << "No of removed characters are " << removeSubString(destination, ch, 0);  //<< "\n" << destination;
	cout << "\n";
	system("pause");
	return 0;
}
