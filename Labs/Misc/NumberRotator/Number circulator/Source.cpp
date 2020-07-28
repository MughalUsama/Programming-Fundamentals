#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int number, counter, rotateCounter, length, divisor, digit, numberReset;
	cout << "\n\t\t\t\tEnter the number : ";
	cin >> number;
	cout << "\n\t\t\t\tHow many times do you want to rotate the number ? ";
	cin >> rotateCounter;
	counter = 1;
	length = 0;
	numberReset = number;
	while (number > 0)
	{
		number = number / 10;
		length = length + 1;
	}
	divisor = pow(10, length-1);
	number = numberReset;
	while (counter <= rotateCounter)
	{
		digit = number / divisor;
		number = number % divisor;
		number = (number * 10) + digit;

		counter = counter + 1;
	}
	cout << "\n\t\t\t\tRotated number is : "<<number;
	cin.ignore();
	
	cout << "Do u want to repeat: ";
	if (cin.get()=='y')
	
	{
		clrscr();
		main();
	}
	cout << "\n\n\n";
	system("pause");
	return 0;
}