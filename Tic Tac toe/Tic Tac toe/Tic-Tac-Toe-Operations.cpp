#include <iostream>
#include "Tic-Tac-Toe-Operations.h"

using namespace std;


void drawBoard(char position[][3])
{
	cout << "\n                                \t\t\t|     |             \n";
	cout << "                                \t\t    " << position[0][0] << "   |  " << position[0][1] << "  |   " << position[0][2] << "            \n";
	cout << "                                \t\t________|_____|________     \n";
	cout << "                                \t\t\t|     |             \n";
	cout << "                                \t\t    " << position[1][0] << "   |  " << position[1][1] << "  |   " << position[1][2] << "           \n";
	cout << "                                \t\t________|_____|________     \n";
	cout << "                                \t\t\t|     |             \n";
	cout << "                                \t\t    " << position[2][0] << "   |  " << position[2][1] << "  |   " << position[2][2] << "            \n";
	cout << "                                \t\t\t|     |             \n";
}

bool fillBoard(char position[][3], int noOfColoumns, int noOfRows, char enteredPosition, int playerNo)
{
	if (playerNo==0)
	{
		int pos = 0;
		for (int i = 0; i < noOfRows; i = i + 1)
		{
			for (int j = 0; j < noOfColoumns; j = j + 1)
			{
				pos++;
				if (enteredPosition == char(pos)+'0' )
				{	
					position[i][j] = enteredPosition;
					return true;
				}
			}
		}
		return false;
	}
	else
	{
		for (int i = 0; i < noOfRows; i = i + 1)
		{
			for (int j = 0; j < noOfColoumns; j = j + 1)
			{
				if (position[i][j] == enteredPosition)
				{
					if (playerNo == 1)
					{
						position[i][j] = 'O';
						return true;
					}
					else
					{
						position[i][j] = 'X';
						return true;
					}
				}
			}
		}
		return false;
	}
}


bool isBoardFull(char position[][3], int noOfColoumns, int noOfRows)
{
	for (int i = 0; i < noOfRows; i = i + 1)
	{
		for (int j = 0; j < noOfColoumns; j = j + 1)
		{
			if (position[i][j] != 'O' && position[i][j] != 'X')
			{
				return false;
			}
		}
	}
	return true;
}


bool isGameFinished(char position[][3], int noOfRows, int noOfColoumns)
{
	if (checkHorizontally(position, noOfRows, noOfColoumns))
	{
		return true;
	}
	else if (checkVertically(position, noOfRows, noOfColoumns))
	{
		return true;
	}
	else if (checkFirstDiagonal(position, noOfRows, noOfColoumns))
	{
		return true;
	}
	else if (checkSecondDiagonal(position, noOfRows, noOfColoumns))
	{
		return true;
	}
	return false;
}

bool checkHorizontally(char position[][3], int noOfRows, int noOfColoumns)
{
	for (int i = 0; i < noOfRows; i = i + 1)
	{
		int j = 0;
		bool wrongCombination = false;
		while (j < noOfColoumns - 1 && !wrongCombination)
		{
			if (position[i][j] != position[i][j + 1])
			{
				wrongCombination = true;
			}
			j = j + 1;
		}
		if (!wrongCombination)
		{
			return true;
		}
	}
	return false;
}

bool checkVertically(char position[][3], int noOfColoumns, int noOfRows)
{
	for (int j = 0; j < noOfColoumns; j = j + 1)
	{
		int i = 0;
		bool wrongCombination = false;
		while (i < noOfRows - 1 && !wrongCombination)
		{
			if (position[i][j] != position[i + 1][j])
			{
				wrongCombination = true;
			}
			i = i + 1;
		}
		if (!wrongCombination)
		{
			return true;
		}
	}
	return false;
}


bool checkFirstDiagonal(char position[][3], int noOfColoumns, int noOfRows)
{
	int i = 0, j = 0;
	while (i < noOfRows - 1 && j < noOfColoumns - 1)
	{
		if (position[i][j] != position[i + 1][j + 1])
		{
			return false;
		}

		i = i + 1;
		j = j + 1;
	}
	return true;
}

bool checkSecondDiagonal(char position[][3], int noOfColoumns, int noOfRows)
{
	int i = noOfColoumns - 1, j = 0;
	while (i > 0 && j < noOfRows - 1)
	{
		if (position[i][j] != position[i - 1][j + 1])
		{
			return false;
		}

		i = i - 1;
		j = j + 1;
	}
	return true;
}