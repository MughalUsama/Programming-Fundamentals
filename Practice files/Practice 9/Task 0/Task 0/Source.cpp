#include <iostream>
using namespace std;
int main()
{
	int number, length, num, divisor, counter, counter1, counter2, digit;
	bool primeFlag = true;
	cout << "Enter the number: ";
	cin >> number;
	length = 0;
	divisor = 1; 
	num = number;
	while (num > 0)
	{
		length = length + 1;
		num = num / 10;
		divisor = divisor * 10;
	}
	divisor = divisor / 10;
	
	
	counter1 = 1;
	counter2 = 2;
	while (counter1 <= (length-1))
	{
		while (counter2<number && primeFlag)
		{
			if (number % counter2 == 0)
			{
				primeFlag = false;
			}
			counter2 = counter2 + 1;
		}
		if (primeFlag)
		{
			digit = number / divisor;
			num = number % divisor;
			number = (num * 10) + digit;
		}
		
		counter1 = counter1 + 1;
	}
	if (primeFlag)
	{
		cout << "Number is circular prime.";
	}
	else
	{
		cout << "Number is not circular prime.";
	}
	cout << "\n";
	system("pause");
	return 0;
}