#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int decimalNum, multiplier, digit, binaryNum;
	multiplier = 1;
	binaryNum = 0;
	
	cout << "Enter number in decimal form: ";
	cin >> decimalNum;
	while (decimalNum>0)
	{
		digit = decimalNum % 2;

		digit = digit * multiplier;
		binaryNum = binaryNum + digit;
		multiplier = multiplier * 10;
		decimalNum = decimalNum / 2;
	}
	
	cout << "\n Number in decimal form is " << binaryNum << ".";
	cout << "\n" ;
	system("pause");
	return 0;
}