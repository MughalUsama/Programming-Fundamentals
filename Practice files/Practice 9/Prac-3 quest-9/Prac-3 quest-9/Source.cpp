#include <iostream>
using namespace std;
int main()
{
	int div=2, num1, num2, leastCommonFactor=1, mod1, mod2;
	bool flag=true;
	cout << "Enter first no: ";
	cin >> num1;
	cout << "Enter second no: ";
	cin >> num2;
	while ((div < num1 || div == num1) && (div < num2 || div == num2))
	{
		while (flag)
		{

			mod1 = num1 % div;
			if (mod1 == 0)
			{
				num1 = num1 / div;
			}
			mod2 = num2 % div;
			if (mod2 == 0)
			{
				num2 = num2 / div;
			}
			if (mod1 == 0 || mod2 == 0)
			{
				leastCommonFactor = leastCommonFactor * div;
			}

			if (mod1 != 0 && mod2 != 0)
			{
				flag = false;
			}

		}
		div = div + 1;

	
	}
	cout << "Least Common Factor is : "<<leastCommonFactor;
	cout << "\n";
	system("pause");
	return 0;
}
