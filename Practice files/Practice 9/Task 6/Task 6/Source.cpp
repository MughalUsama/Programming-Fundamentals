#include <iostream>
using namespace std;
int main()
{
	int sum, num1, num2, num3, number, power, power1, power2, noOfTerms, counter, counter1, numberReset, powerReset;
	sum = 0;
	power1 = 0;
	power2 = 1;
	
	num1 = 1;
	num2 = 1;
	number = 1;
	
	counter = 2;
	counter1 = 1;
	cout << "Enter number of terms to be added: ";
	cin >> noOfTerms;
	while (counter<noOfTerms)
	{
		powerReset = power2;
		num3 = num1 + num2;
		numberReset = num2;
		if (counter%2==0)
		{
			
			power = power1 + power2;
			while (counter1<=power)
			{
				number = number * num3;
				counter1 = counter1 + 1;
			}
			sum = sum + number;
			counter1 = 1;
		}
		else
		{
			
			power = power + power1;
			while (counter1 <= power)
			{
				number = number * num3;
				counter1 = counter1 + 1;
			}
			counter1 = 1;
			sum = sum - number;
		}
		number = 1;
		power2 = power;
		power1 = powerReset;
		num2 = num3;
		num1 = numberReset;
	
		counter = counter + 1;
	}

	cout << "\n  The sum upto "<<noOfTerms<< " is " << sum;
	cout << "\n";
	system("pause");
	return 0;
}