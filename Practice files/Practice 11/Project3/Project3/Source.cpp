#include<iostream>
using namespace std;

bool isSorted(int[],int);
bool isAscending(int [], int);
bool isDescending(int [], int);

int main()
{
	int noOfValues;
	cout << "How many numbers you want to enter: ";
	cin >> noOfValues;
	int array[40];
	for (int i = 0; i < noOfValues; i = i + 1)
	{
		cout << " Enter a number: ";
		cin >> array[i];
	}

	isSorted(array,noOfValues)? cout << "The array is sorted": cout << "The array is not sorted";
	cout << "\n";
	system("pause");
	return 0;
		
}

bool isSorted(int array[], int noOfValues)
{

	if (isAscending(array,noOfValues)||isDescending(array, noOfValues))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isAscending(int array[], int noOfValues)
{
	int smaller=array[0];
	for (int i = 1; i < noOfValues; i=i+1)
	{
		if (array[i]>=smaller)
		{
			smaller = array[i];
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool isDescending(int array[], int noOfValues)
{
	int larger = array[0];
	for (int i = 1; i < noOfValues; i = i + 1)
	{
		if (array[i]<=larger)
		{
			larger = array[i];
		}
		else
		{
			return false;
		}
	}
	return true;
	
}