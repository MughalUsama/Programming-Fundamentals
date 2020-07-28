#include <iostream>
using namespace std;
int main()
{
	int number, digit1, digit2, digit3;
	cout << "Enter a three digit number: ";
	cin >> number;
	if (number<0 || number>999)
	{
		cout << "Enter a 3 digit number.";
	}
	else
	{
		digit3 = number % 10;
		number = number / 10;
		digit2 = number % 10;
		number = number / 10;
		digit1 = number % 10;
		if (digit1==digit3)
		{
			cout << "No. is palindrome.";
		}
		else
		{
			cout << "No. is not palindrome.";
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}