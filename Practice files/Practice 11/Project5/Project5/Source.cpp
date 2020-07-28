#include <iostream>
using namespace std;
bool isArrayUnique(int[], int);

int main()
{
	int array[10];
	for (int i = 0; i < 10; i=i+1)
	{
		cout << "Enter element " << i + 1 << " " ;
		cin >> array[i];
	}
	isArrayUnique(array,10) ? cout << "\nArray is Unique" : cout << "\nArray is Unique";

	cout << "\n";
	cin.ignore();
	cin.get();
}

bool isArrayUnique(int array[], int size)
{
	for (int i = 0; i < size-1; i=i+1)
	{
		for (int j = i+1; j < size; j=j+1)
		{
			if (array[i] == array[j])
			{
				return false;
			}
		}
	}
	return true;
}