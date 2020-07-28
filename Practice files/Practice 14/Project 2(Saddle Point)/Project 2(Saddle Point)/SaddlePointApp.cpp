#include "SaddlePointApp.h"
#include "SaddlePointSearchOperations.h"
#include <iostream>
using namespace std;
void getSaddlePoint(int array[][5], int rows, int coloumns)
{

	int noOfSaddlePoints = 0;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < coloumns; j = j + 1)
		{
			if (isGreatestInRow(array, rows, coloumns, i, j) && isSmallestInColoumn(array, rows, coloumns, i, j))
			{
				cout << "Saddle point no " << noOfSaddlePoints + 1 << " is : " << array[i][j] << " at position [" << i << "," << j << "]\n";
				noOfSaddlePoints = noOfSaddlePoints + 1;
			}
		}
	}
	if (noOfSaddlePoints == 0)
	{
		cout << "\n\t\t\t\t\tThere is no saddle point. ";
	}

}
