#include <iostream>
using namespace std;
void inputArray(int array[][3], int row, int coloumn);
bool isPermutation(int array[][3], int coloumns, int rows);

int main()
{
	int array[3][3];
	inputArray(array, 3, 3);
	if (isPermutation(array, 3, 3))
	{
		cout << "\nAll rows are permutations.";
	}
	else
	{
		cout << "\nAll rows are not permutations.";
	}
		
	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}

bool isPermutation(int array[][3], int coloumns, int rows)
{
	
	for (int k = 0; k < rows-1; k = k + 1)
	{
		for (int l = 0; l < coloumns; l = l + 1)
		{
			int counter1 = 0, counter2 = 0;
			int currentElement = array[k][l];
			for (int j = 0; j < coloumns; j = j + 1)
			{
				if (array[k][j] == currentElement)
				{
					counter1 = counter1 + 1;
				}
			}

			for (int m = 0; m < coloumns; m = m + 1)
			{
				if (array[k + 1][m]== currentElement)
				{
					counter2= counter2 + 1;
				}
			}

			if (counter1!=counter2)
			{
				return false;
			}
		}
	}
	return true;
}
	
void inputArray(int array[][3],int row,int coloumn)
{
	for (int i = 0; i < row; i = i + 1)
	{
		for (int j = 0; j < coloumn; j = j + 1)
		{
			cin >> array[i][j];
		}
	}
}
