#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char string1[30] = "Usama", string2[30] = "Shahid";

	copyString(string1, string2);	//calling Function

	cout << string1;
	cout << "\n";
	system("pause");
	return 0;
}