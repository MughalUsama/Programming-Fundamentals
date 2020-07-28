#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char stringNumber[30] = "-1234";

	cout << "Conversion to integer = " << convertToInteger(stringNumber);
	cout << "\n";
	system("pause");
	return 0;
}
