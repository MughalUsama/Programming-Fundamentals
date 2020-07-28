#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2;
	cout << "enter 1st no: ";
	cin >> num1;
	cout << "enter 2nd no: ";
	cin >> num2;
	int digit1, digit2, sum, carry = 0, noOfCarries = 0;
	while (num1>0 && num2>0)
	{
		digit1 = num1 % 10;
		digit2 = num2 % 10;
		num1 = num1 / 10;
		num2 = num2 / 10;
		sum = digit1 + digit2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			noOfCarries = noOfCarries + 1;
		}
		else
		{
			carry = 0;
		}
	}

	cout << "No of carries are " << noOfCarries;
	cout << "\n";

	system("pause");
	return 0;
}