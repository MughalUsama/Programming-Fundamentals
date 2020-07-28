#include <iostream>
using namespace std;

// checking carry..
bool checkCarry(int sum)
{
	if (sum>9)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// calculating  no of carries.
int countCarry(int number1, int number2)
{
	int carry = 0, noOfCarries=0, sum, digit1, digit2;
	while (number1>0 || number2>0)
	{
		digit1 = number1 % 10;
		digit2 = number2 % 10;
		sum = digit1 + digit2 + carry;
		if (checkCarry(sum))
		{
			carry = 1;
			noOfCarries = noOfCarries + 1;
		}
		else
		{
			carry = 0;
		}
		number1 = number1 / 10;
		number2 = number2 / 10;
	}

	return noOfCarries;
}


int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "There are " << countCarry(num1, num2) << " carries in the sum.";

	cout << "\n";
	system("pause");
	return 0;
}