#include <iostream>
using  namespace std;

void displayTable(int number)
{
	cout << "\t Table of " << number << "\n";
	for (int i = 1; i <= 10; i=i+1)
	{
		cout << number << " * " << i << " = " << number * i<< "\n";
	}
}

int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	displayTable(number);
	cout << "\n";
	system("pause");
	return 0;
}