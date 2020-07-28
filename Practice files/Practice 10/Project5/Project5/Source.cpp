#include <iostream>
using namespace std;
//Prototypes:
bool isPrime(int);
int calculateLength(int);
int calculateDivisor(int);
int rotateNumber(int, int);
bool isCircularPrime(int);


// main function -------------------------
int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;

	if (isCircularPrime(number))
	{
		cout << "The given number is \"circular prime\"";
	}
	else
	{
		cout << "The given number is \" not \" circular prime";
	}
	cout << "\n";
	system("pause");
	return 0;
}


// checking if circular prime------------
bool isCircularPrime(int num)
{
	int length, divisor;
	bool circularPrime = isPrime(num);
	if (circularPrime)
	{
		length = calculateLength(num);
		divisor = calculateDivisor(length);
	}

	int counter = 1;

	while (counter<calculateLength(num) && circularPrime)
	{
		// calling function to rotate the number
		num = rotateNumber(num, divisor);
		// checking if rotation is prime
		circularPrime = isPrime(num);
		counter = counter + 1;
	}
	return circularPrime;

}


// checking if prime---------------------
bool isPrime(int num)
{
	bool prime = true;
	for (int i = 2 ; i <= (num/2+1); i=i+1)
	{
		if (num % i == 0)
		{
			prime = false;
		}
	}
	return prime;

} 
//_____________________________________________

// calculating the length-----------------

int calculateLength(int num)
{
	int length=0;
	while (num>0)
	{
		num = num / 10;
		length = length + 1;
	}
	return length;
}
//______________________________________________

// calculating the divisor----------------

int calculateDivisor(int length)
{
	int divisor = 1;
	int counter = 1;
	while (counter<length)
	{
		divisor = divisor * 10;
		counter = counter + 1;
	}
	return divisor;
}
//______________________________________________

// rotating the number--------------------

int rotateNumber(int num, int divisor)
{
	num = (num / divisor) + (10 * (num%divisor));
	return num;
}
//______________________________________________


//______________________________________________