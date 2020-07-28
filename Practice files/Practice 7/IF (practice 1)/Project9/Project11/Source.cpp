#include <iostream>
using namespace std;
int main()
{
	int number ,firstDigit ,secondDigit, thirdDigit, fourthDigit;
	cout << "Enter a four digit no: ";
	cin >> number;
	fourthDigit = number % 10;
	number = number / 10;
	thirdDigit = number % 10;
	number = number / 10;
	secondDigit = number % 10;
	number = number / 10;
	firstDigit = number % 10;
	cout << firstDigit << "\n";
	cout << secondDigit << "\n";
	cout << thirdDigit << "\n";
	cout << fourthDigit << "\n";
	cout << "\n";
	system("pause");
	return 0;
}