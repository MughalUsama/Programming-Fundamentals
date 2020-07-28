
#include <iostream>
using namespace std;

void separateIntegers(int array[], int noOfValues);
void displayArray(int [], int);
void swapArray(int array[], int noOfElements);

int main()
{
	int array[10] = {0,9,5,3,7,2,6,7,11};
	separateIntegers(array, 8);

	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}

void separateIntegers(int array[], int noOfElements)
{
	swapArray(array, 8);
	displayArray(array, 8);

}
void displayArray(int array[], int noOfValues)
{
	for (int i = 0; i < 8; i = i + 1)
	{
		cout << array[i] << " ";
	}
}
void swapArray(int array[], int noOfElements)
{
	int i = 0;
	int counter = 0;
	while (counter<noOfElements)
	{
		if (array[i] % 2 == 1)
		{
			int temp = array[i];
			for (int j = i; j < noOfElements - 1; j = j + 1)
			{
				array[j] = array[j + 1];
			}
			array[noOfElements - 1] = temp;

		}
		else
		{
			i = i + 1;
		}
		counter = counter + 1;
	}
}