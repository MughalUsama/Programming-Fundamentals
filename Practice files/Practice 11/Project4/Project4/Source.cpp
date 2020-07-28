#include<iostream>
using namespace std;

void displaySwappedArrays(int [8], int [8], int);
int main()
{
	int sizeOfArrays;
	int array1[8] = {0,1,2,3,4,5,6,7}, array2[8] = {8,9,11,12,13,14,15,16};
	
	getSwappedArray(array1, array2, 8);
	
	cout << "\n";
	system("pause");
	return 0;
}

void getSwappedArray(int array1[8], int array2[8], int size)
{
	swapElementsOfArray(array1, array2, 8);
	displaySwappedArrays(array1, array2, 8);
}


void swapElementsOfArray(int array1[8], int array2[8], int size)
{
	int temp;
	for (int j = 0; j < size; j = j + 1)
	{
		temp = array1[j];
		array1[j] = array2[j];
		array2[j] = temp;
		
	}
}

void displaySwappedArrays(int array1[8], int array2[8], int size)
{
	cout << "\n\t\t:Swapped arrays:\n    Array1  \t\t\t   Array2";
	for (int i = 0; i < size; i=i+1)
	{
		cout << "\nNo in array1[" << i << "] : " << array1[i] << "\t\tNo in array2[" << i << "] : " << array2[i];
	}
}