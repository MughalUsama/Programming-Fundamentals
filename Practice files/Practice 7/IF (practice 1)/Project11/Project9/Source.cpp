#include <iostream>
using namespace std;
int main()
{
	float num1, num2, num3;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	if (num1>=num2 && num1>=num3)
	{
		cout << num1 << " is largest number\n";
		if (num2>=num3)
		{
			cout << num2 << " is middle number\n";
			cout << num3 << " is smallest number\n";
		}
		else
		{
			cout << num3 << " is middle number\n";
			cout << num2 << " is smallest number\n";

		}
	}
	if (num2 >= num1 && num2 >= num3)
	{
		cout << num2 << " is largest number\n";
		if (num1 >= num3)
		{
			cout << num1 << " is middle number\n";
			cout << num3 << " is smallest number\n";
		}
		else
		{
			cout << num3 << " is middle number\n";
			cout << num1 << " is smallest number\n";

		}
	}
	if (num3 >= num1 && num3 >= num2)
	{
		cout << num3 << " is largest number\n";
		if (num2 >= num1)
		{
			cout << num2 << " is middle number\n";
			cout << num1 << " is smallest number\n";
		}
		else
		{
			cout << num1 << " is middle number\n";
			cout << num2 << " is smallest number\n";

		}
	}
	cout << "\n";
	system("pause");
	return 0;
}