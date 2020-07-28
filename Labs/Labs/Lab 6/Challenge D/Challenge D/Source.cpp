#include <iostream>
using namespace std;
int main()
{
	int number, counter, power, divisor, numberReset;
	bool found = false, divides=true;
	cout << "Enter the number: ";
	cin >> number;
	
	divisor = 2;
	
	numberReset = number;
	while (found==false && divisor<number)
	{
		power = 0;
		divides = true;
		while (number>1 && divides)
		{
			
			if (number%divisor==0)
			{
				number = number / divisor;
				power = power + 1;
				
			}
			else
			{
				divides = false;
				divisor = divisor + 1;
			}

		}
		if (number==1)
		{
			found = true;
		}
		number = numberReset;

	}
	if (found==false)
	{
		cout << number <<" can't be expressd as x^y";
	}
	else
	{
		cout << number << " can be expressd as " << divisor << "^" << power;
	}
	cout << "\n";
	system("pause");
	return 0;
}