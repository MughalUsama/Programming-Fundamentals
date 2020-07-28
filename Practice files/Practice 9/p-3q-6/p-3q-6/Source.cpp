#include <iostream>
using namespace std;
int main()
{
	int num1, num2, divisor, mod1, mod2 ;
	bool coPrime;
	coPrime = true;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	divisor = 2;
	while (divisor <= num1 && divisor <= num2)
	{
		mod1 = num1 % divisor;
		mod2 = num2 % divisor;
		if (mod1 == 0 && mod2 == 0)
		{
			coPrime = false;
		}
		divisor = divisor + 1;
	}
	if (coPrime)
	{
		cout << "Both numbers are co-prime.";
	}
	else
	{
		cout << "Both numbers are not co-prime.";
	}


	cout << "\n";
	system("pause");
	return 0;
}