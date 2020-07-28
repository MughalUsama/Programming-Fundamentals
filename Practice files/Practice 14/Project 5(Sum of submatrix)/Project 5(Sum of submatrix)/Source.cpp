
#include <iostream>
using namespace std;

void getMaximumSum(int [][10], int , int);
int getMaximumSumInRow(int [][10], int , int , int , int);
int getMaximumSumInColoumn(int[][10], int, int, int, int);

int main()
{
	int noOfRows, noOfColoumns;
	int array[10][10];
	cout << "Enter the no of rows & coloumns (MAX:10): ";
	cin >> noOfRows;
	noOfColoumns = noOfRows;
	cout << "Enter the values in matrix:";
	for (int i = 0; i < noOfColoumns; i = i + 1)
	{
		for (int j = 0; j < noOfColoumns; j = j + 1)
		{
			cout << "\nInput  in [" << i << "," << j << "]";
			cin >> array[i][j];
		}
	}

	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}

void getMaximumSum(int array[][10], int coloumns, int rows)
{


}

int getMaximumSumInRow(int array[][10], int coloumns, int rows, int coloumnNo, int rowNumber)
{
	int maximumSum = 0, rowSum = 0;
	for (int i = coloumnNo; i < coloumns; i=i+1)
	{
		rowSum = rowSum + array[rowNumber][i];
		if (rowSum>maximumSum)
		{
			maximumSum = rowSum;
		}
	}
	return maximumSum;
}

int getMaximumSumInColoumn(int array[][10], int coloumns, int rows, int coloumnNo, int rowNo)
{
	int maximumSum = 0, coloumnSum = 0;
	for (int i = rowNo; i < coloumns; i = i + 1)
	{
		coloumnSum = coloumnSum + array[i][coloumnNo];
		if (coloumnSum>maximumSum)
		{
			maximumSum = coloumnSum;
		}
	}
	return maximumSum;
}

int getMaximumSumInSubmatrix(int array[][10], int coloumns, int rows, int coloumnNo, int rowNo)
{
	for (int i = 0; i < rows; i=i+1)
	{
		for (int j = 0; j < coloumns; j=j+1)
		{

		}
	}
}