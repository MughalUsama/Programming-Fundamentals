#include <iostream>
using namespace std;
int main()
{
	int number, binary, digit1, digit2, num1;
	bool isSparse, nextSparseFound = false;
	cout << "Enter the number: ";
	cin >> number;
	num1 = number;

	while (!nextSparseFound)
	{
		digit1 = num1 % 2;
		num1 = num1 / 2;
		isSparse = true;
		while (num1 > 0)
		{

			digit2 = num1 % 2;
			num1 = num1 / 2;
			if (digit1 == 1 && digit2 == 1)
			{
				isSparse = false;
			}
			digit1 = digit2;
		}

		if (isSparse == false)
		{
			number = number + 1;
			num1 = number;
		}
		else
		{
			nextSparseFound = true;
		}
	
	}

	cout << number;

	cout << "\n";
	system("pause");
	return 0;
}