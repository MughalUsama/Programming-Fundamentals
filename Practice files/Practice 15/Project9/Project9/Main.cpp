#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char destination[50] = "He ate a egg.";
	char ch = 'n';
	insertString(destination, 8, ch);
	cout << destination;


	cout << "\n";
	system("pause");
	return 0;
}
