#include <iostream>
using namespace std;
int getMinimumValue(int [], int);
int main()
{
	int size;
	int arr[40];
	cout << "How many numbers you want to enter (Max = 40) : ";
	cin >> size;
	cout << "The minimum value is "<<getMinimumValue(arr, size);

	cout << "\n";
	system("pause");
	return 0;
}

int getMinimumValue(int arr[],int size)
{
	cout << "Enter no 1 : ";
	cin >> arr[0];
	int minimum = arr[0];
	for (int  i = 1; i < size; i=i+1)
	{
		cout << "Enter no " << i+1 << " : ";
		cin >> arr[i];
		if (arr[i]<minimum)
		{
			minimum = arr[i];
		}
	}
	return minimum;
}