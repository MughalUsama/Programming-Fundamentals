#include <iostream>
#include "FindTreasureApp.h"
using namespace std;

// function definition
void findTreasure(int array[][5], int rows, int coloumn)
{
	bool treasureFound = false;
	int rowIndex = 0, coloumnIndex = 0;
	for (int i = 1; i < (rows*coloumn) && treasureFound == false; i = i + 1)
	{
		int clue = array[rowIndex][coloumnIndex];
		cout << "\nClue no " << i << " is : " << clue;
		if (clue == (rowIndex + 1) * 10 + (coloumnIndex + 1))
		{
			cout << "\nThe treasuse is at [" << rowIndex + 1 << "," << coloumnIndex + 1 << "]";
			treasureFound = true;
		}
		rowIndex = clue / 10 - 1;
		coloumnIndex = clue % 10 - 1;
	}
	if (treasureFound==false)
	{
		cout << "There is no treasure in the maze. ";
	}
}
