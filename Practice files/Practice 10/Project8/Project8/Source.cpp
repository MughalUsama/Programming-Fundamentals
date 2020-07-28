#include <iostream>

using namespace std;

int add(int num1, int num2)
{
	int sum = num1 + num2;
	if (num1 > 0 && num2 > 0 && sum < 0)
	{
		cout << "OverFlow.\n";
		cin.ignore();
		cin.get();
		exit(0);
	}
	else if(num1 < 0 && num2 < 0 && sum > 0)
	{
		cout << "UnderFlow.\n";
		cin.ignore();
		cin.get();
		exit(0);
	}
	else
	{
		return sum;
	}
}

int main()
{
	int num1, num2;
	cout << "Enter 1st no: ";
	cin >> num1;
	cout << "Enter 2nd no: ";
	cin >> num2;
	cout << "The addition is "<<add(num1, num2);
	cout << "\n";
	system("pause");
	return 0;
}