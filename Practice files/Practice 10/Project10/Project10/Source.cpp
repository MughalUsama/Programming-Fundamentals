#include <iostream>
using namespace std;

void isConjectureTrue(int, int);
bool isPrime(int);
bool calcEvenSum(int, int, int);
bool calcFirstPrimeNo(int, int, int);
bool calcSecondPrimeNo(int, int, int, int);
bool isEven(int);

int main()
{
	int rangeStart, rangeEnd;
	cout << "Enter the start of range:";
	cin >> rangeStart;
	cout << "Enter the end of range:";
	cin >> rangeEnd;
	if (rangeStart >= rangeEnd)
	{
		cout << "The range is invalid.";
	}
	else
	{
		isConjectureTrue(rangeStart, rangeEnd);
	}
	cout << "\n";
	system("pause");
	return 0;
}
void isConjectureTrue(int rangeStart, int rangeEnd)
{
	int evenNumber;
	bool conjectureValid = true;
	for (int i = rangeStart; i <= rangeEnd; i = i + 1)
	{
		if (isEven(i))
		{
			evenNumber = i;
			calcFirstPrimeNo(rangeStart, rangeEnd, evenNumber);

		}
	}
	cout << "The conjecture is true in given range.";


}


bool calcFirstPrimeNo(int rangeStart, int rangeEnd, int evenSum)
{

	for (int j = 2; j <= rangeEnd; j = j + 1)
	{
		if (isPrime(j))
		{

			if (calcSecondPrimeNo(rangeStart, rangeEnd, j, evenSum))
			{
				return true;
			}
		}
		if (j == rangeEnd)
		{
			cout << "conjecture is invalid for " << evenSum;
			cin.ignore();
			cin.get();
			exit(0);
		}
	}
	return true;
}
bool calcSecondPrimeNo(int rangeStart, int rangeEnd, int firstPrimeNo, int evenSum)
{

	for (int j = 2; j <= rangeEnd; j = j + 1)
	{

		if (isPrime(j))
		{
			if (calcEvenSum(firstPrimeNo, j, evenSum))
			{
				return true;
			}

		}
	}
	return false;
}

// checking if even
bool isEven(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// checking if prime
bool isPrime(int number)
{
	int divisor = 2;
	bool prime = true;
	while (divisor <= (number / 2) && prime)
	{
		if (number%divisor == 0)
		{
			prime = false;
		}
		divisor = divisor + 1;
	}
	return prime;
}

bool calcEvenSum(int firstPrimeNo, int secondPrimeNo, int evenSum)
{
	if (firstPrimeNo + secondPrimeNo == evenSum)
	{
		return true;
	}
	return false;
}
