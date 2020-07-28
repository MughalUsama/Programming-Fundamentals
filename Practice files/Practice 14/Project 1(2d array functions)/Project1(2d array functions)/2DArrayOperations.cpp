#include <iostream>
#include "2DArrayOperations.h"
using namespace std;


// getting total of array
int getTotal(int array[][5], int rows, int coloumns)
{
	int total = 0;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < coloumns; j = j + 1)
		{
			total = total + array[i][j];
		}
	}
	return total;
}


// getting average of array
float getAverage(int array[][5], int rows, int coloumns)
{
	int total, noOfValues;
	float average;
	total = getTotal(array, rows, coloumns);
	noOfValues = rows * coloumns;
	average = (float)total / noOfValues;
	return average;
}


// getting total of a row "X"
int getRowTotal(int array[][5], int rows, int coloumns, int rowNumber)
{
	int rowTotal = 0;
	for (int i = 0; i < coloumns; i = i + 1)
	{
		rowTotal = rowTotal + array[rowNumber][i];
	}
	return rowTotal;
}


// getting total of a coloumn "Y"
int getColoumnTotal(int array[][5], int rows, int coloumns, int coloumnNumber)
{
	int coloumnTotal = 0;
	for (int i = 0; i < coloumns; i = i + 1)
	{
		coloumnTotal = coloumnTotal + array[i][coloumnNumber];
	}
	return coloumnTotal;
}


// getting highest in a row "Z"
int getHighestInRow(int array[][5], int rows, int coloumns, int rowNumber)
{
	int highest = array[rowNumber][0];
	for (int i = 1; i < coloumns; i = i + 1)
	{
		if (array[rowNumber][i] > highest)
		{
			highest = array[rowNumber][i];
		}
	}
	return highest;
}


// getting lowest in a row "Z"
int getLowestInRow(int array[][5], int rows, int coloumns, int rowNumber)
{
	int lowest = array[rowNumber][0];
	for (int i = 1; i < coloumns; i = i + 1)
	{
		if (array[rowNumber][i] < lowest)
		{
			lowest = array[rowNumber][i];
		}
	}
	return lowest;
}