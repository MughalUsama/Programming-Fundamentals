#include <iostream>
#include "MyString.h"
using namespace std;


int main()
{
	char string1[30] = "123456", string2[30] = "7890";

	insertString(string1, string2, 3);	//calling Function

	cout << "\n";
	system("pause");
	return 0;
}