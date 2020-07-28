#include <iostream>
using namespace std;

bool isEven(int num)
{
	if (num%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;

	if (isEven(number))
	{
		cout << "Number is even.";
	}
	else
	{
		cout << "Number is odd.";

	}
	cout << "\n";
	system("pause");
	return 0;
}