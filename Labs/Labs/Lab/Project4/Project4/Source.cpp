
#include <iostream>
using namespace std;
void countprime();
bool isMinPrimeFactor(int, int);

int main()
{
	int testCases;
	cin >> testCases;
	for (int i = 1; i <= testCases; i = i + 1)
	{
		countprime();
	}
	cout << "\n";
	system("pause");
	return 0;
}

void countprime()
{
	int prime, count = 1;
	cin >> prime;
	for (int i = prime + 1; i <= 10000000; i = i + 1)
	{
		if ((i%prime == 0))
		{
			if (isMinPrimeFactor(i, prime))
			{
				count = count + 1;
			}
		}
		}
	cout << count << "\n";
}
bool isMinPrimeFactor(int number, int prime)
{
	for (int i = 2; i<prime; i = i + 1)
	{
		if (number%i == 0)
		{
			return false;
		}
	}
	return true;
}