#include<iostream>
using namespace std;

void getFinalIndex(int[], int[], int);
int main()
{

	int noOfTestCases, index[100], noOfSwaps[100];
	cin >> noOfTestCases;
	for (int i = 0; i < noOfTestCases; i=i+1)
	{
		cin >> index[i] >> noOfSwaps[i];

	}
	
	getFinalIndex(index, noOfSwaps, noOfTestCases);
	cout << "\n";
	system("pause");
	return 0;
}

void getFinalIndex(int index[], int noOfSwaps[], int noOfTestCases)
{

	for (int i = 0; i < noOfTestCases; i = i + 1)
	{
		for (int j = 1; j <= noOfSwaps[i]; j = j + 1)
		{
			switch (index[i])
			{
			case 0:
				index[i] = 1;
				break;
			case 1:
				index[i] = 0;
				break;
			case 2:
				index[i] = 1;
				break;
			}
		}
		cout << index[i] << '\n';
	}
	
}