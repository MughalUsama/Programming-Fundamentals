#include <iostream>
using namespace std;
int main()
{
	int num1, num2, divisor, gcd;
	cout << "Enter 1st no: ";
	cin >> num1;
	cout << "Enter 2nd no: ";
	cin >> num2;
	divisor = 1;
	while (divisor <= num1 || divisor <= num2 )
	{
		if (num1%divisor==0 && num2%divisor==0)
		{
			gcd = divisor;
		}
		divisor = divisor + 1;
	}
	cout << "Greatest common divisor = " << gcd;
	cout << "\n";
	system("pause");
	return 0;
}