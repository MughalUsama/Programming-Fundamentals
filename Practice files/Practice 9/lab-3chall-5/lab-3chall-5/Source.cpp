#include <iostream>
using namespace std;
int main()
{
	int noOfDigits, number, counter, product;
	cout << "Enter the no of digits: ";
	cin >> noOfDigits;

	product = 10;
	counter = 1;
	while (counter<noOfDigits)
	{
		product = product * 10;
		counter = counter + 1;

	}
	number = product - 1;
	cout << "Largest number of given digits is " << number;
	cout << "\n";
	system("pause");
	return 0;
}