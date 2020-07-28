//number whose product of digits is equal to given number...
#include <iostream>
using namespace std;
int main()
{
	int product, number, numberReset, num1Reset, digit , num1=10, divisor=2;
	bool equal=false, possible=true;
	cout << "Enter the product : ";
	cin >> number;
	product = 1;
	numberReset = number;
	while (number!=1 && possible)
	{
		if (number%divisor == 0)
		{
			number = number / divisor;
		
		}
		if ((divisor)>9)
		{
			possible = false;
		}
		if (number%divisor!=0)
		{
			divisor = divisor + 1;
		
		}
		
	}

	number = numberReset;

	//finding number. starting from 10-11-12....>
	while (possible && equal==false)
	{
		product = 1;
		num1Reset = num1;
		
		while (num1>0)
		{
			digit = num1 % 10;
			num1 = num1 / 10;
			product = product * digit;
		}
		if (product==number)
		{
			equal = true;
		}
		
		num1 = num1Reset;
		num1 = num1 + 1;
		
	}





	if (possible == false)
	{
		cout << "Not possible.";
	}
	else
	{
		cout << "Number is : " << num1-1;
	}

	cout << "\n";
	system("pause");
	return 0;
}