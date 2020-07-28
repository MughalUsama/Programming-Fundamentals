#include <iostream>
using namespace std;
int main()
{
	int number, sum=0, length, digit,numberReset, multiplier, counter=1, factorial=1;
	cout << "Enter the number: ";
	cin >> number;
	numberReset = number;

	length = 0;
	while (number>0)
	{
		number = number / 10;
		length = length + 1;
		
	}
	number = numberReset;
	while (counter<=length)
	{
		digit = number % 10;
		
		number = number / 10;
		multiplier = digit;
		while (multiplier > 1)
		{
			factorial = factorial * multiplier;
			multiplier = multiplier - 1;

		}
		sum = sum + factorial;
		factorial = 1;
		counter = counter + 1;
	}
	(sum == numberReset) ? cout << "It is a strong number." : cout << "It is not a strong number";

	cout << "\n";
	system("pause");
	return 0;
}
