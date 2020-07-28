#include <iostream>
#include "SaddlePointSearchOperations.h"
using namespace std;

//taking input in array
void inputArray(int array[][5], int rows, int coloumns)
{
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < coloumns; j = j + 1)
		{
			cout << "Enter value in array [" << i << "] [" << j << "] : ";
			cin >> array[i][j];
		}
	}
}

// checking if largest in row
bool isGreatestInRow(int array[][5], int rows, int coloumns, int coloumnIndex, int rowIndex)
{
	for (int i = coloumnIndex - 1; i > 0; i = i - 1)
	{
		if (array[rowIndex][coloumnIndex]<array[rowIndex][i])
		{
			return false;
		}
	}
	for (int i = coloumnIndex + 1; i < coloumns; i = i + 1)
	{
		if (array[rowIndex][coloumnIndex]<array[rowIndex][i])
		{
			return false;
		}
	}
	return true;
}
// checking if smallest in coloumn

bool isSmallestInColoumn(int array[][5], int rows, int coloumns, int coloumnIndex, int rowIndex)
{
	for (int i = rowIndex - 1; i > 0; i = i - 1)
	{
		if (array[rowIndex][coloumnIndex]>array[i][coloumnIndex])
		{
			return false;
		}
	}
	for (int i = coloumnIndex + 1; i < rows; i = i + 1)
	{
		if (array[rowIndex][coloumnIndex]>array[i][coloumnIndex])
		{
			return false;
		}
	}
	return true;

}
