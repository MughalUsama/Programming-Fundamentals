#include <iostream>
using namespace std;

void getLastOccurence(int [], int *, int);
int main()
{
	int positionOfMinValue=1, numberOfValues;
	int array[40];
	
	cout << "How many numbers you want to enter? ";
	cin >> numberOfValues;
	getLastOccurence(array, &positionOfMinValue, numberOfValues);
	cout << "The last occurence is at index : " << positionOfMinValue;
	cout << "\n";
	system("pause");
	return 0;
}

void getLastOccurence(int array[], int * position, int size)
{
	int minimum;
	cout << "Enter no 1 : ";
	cin >> array[0];
	minimum= array[0];
	for (int i = 1; i < size; i=i+1)
	{
		cout << "Enter no " << i + 1 << " : ";
		cin >> array[i];
		if (array[i]<=minimum)
		{
			minimum = array[i];
			*position = i;
		}		
	}
}