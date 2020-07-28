#include <iostream>
using namespace std;
int reverseNumber(int , int );
int calculateDivisor(int);
int calculateLength(int);
bool isSumPalindrome(int, int);
void calculatePalindrome(int);
int main()
{
	int number;
	cout << "Enter the number";
	cin >> number;
	calculatePalindrome(number);
	system("pause");
	return 0;
}
void calculatePalindrome(int number)
{
	int noOfAdditions = 0;
	while (noOfAdditions < 1000 && number < 42949697295)
	{

		int length = calculateLength(number);
		int divisor = calculateDivisor(length);
		int reversedNumber = reverseNumber(length, number);
		int sum = number + reversedNumber;
		if (isSumPalindrome(length, sum))
		{
			cout << "Palindrome is " << sum;
			cout << "No of additions is " << noOfAdditions;
			cin.ignore();
			cin.get();
			exit(0);
		}
		number = sum;
		
	}
	cout << "No palindrome found.";
}
int calculateLength(int number)
{
	int length = 0;
	while (number>0)
	{
		length = length + 1;
		number = number / 10;
	}
	return length;
}

int calculateDivisor(int length)
{
	int	divisor = 1;
	for (int i = 1; i < length; i=i+1)
	{
		divisor = divisor * 10;
	}
	return divisor;
}

int reverseNumber(int length, int number)
{
	int multiplier = 1;
	int reversedNumber = 0;
	int digit;
	while (number>0)
	{
		digit = number / calculateDivisor(length);
		
		
		reversedNumber = reversedNumber + (digit * multiplier);
		multiplier = multiplier * 10;
		number = number % calculateDivisor(length);
	}
	return reversedNumber;
}
bool isSumPalindrome(int sum, int length)
{
	if (sum == reverseNumber(length, sum))
	{
		return true;
	}
	else
	{
		return false;
	}
}