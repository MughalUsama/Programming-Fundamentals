#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char stringNumber[30] = "-3.14159";
	cout << " In floating point form: "<< convertToFloat(stringNumber);
	
	cout << "\n";
	system("pause");
	return 0;
}
