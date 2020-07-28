
#include <iostream>
using namespace std;

void getRelativePrime(int);
int main()
{
	int testCases, rank;
	cin >> testCases;
	for (int i = 1; i <= testCases; i = i + 1)
	{
		cin >> rank;
		getRelativePrime(rank);
	}

	cout << "\n";
	system("pause");
	return 0;
}
void getRelativePrime(int rank)
{
	int divisor = 1;
	bool coPrime = true;;
	for (int i = rank-1; i > 0; i = i - 1)
	{
		bool coPrime = true;
		for (int j = 2; j < rank; j = j + 1)
		{
			if (rank%j == 0 && i%j == 0)
			{
				coPrime = false;
			}
		}
		if (coPrime == true)
		{
			cout << i ;
			return;
		}
		
	}
	
	if (coPrime==false)
	{
		cout << rank;

	}
	
}