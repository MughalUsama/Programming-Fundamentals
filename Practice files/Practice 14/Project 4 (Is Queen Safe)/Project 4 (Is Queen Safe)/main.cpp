#include <iostream>
using namespace std;
bool isSafeInColoumn(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1);
bool isSafeDiagonally(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1);
bool isSafeInRow(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1);


int main()
{
	int coloumnOfQ1, rowOfQ1, rowOfQ2, coloumnOfQ2;
	int chessBoard[8][8] = { {0,0,0,0,0,0,0,0}, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 } ,{ 0,0,0,0,0,0,0,0 } };
	cout << "\nEnter the position of first queen : ";
	cout << "\nColoumn: ";
	cin >> coloumnOfQ1;
	cout << "\nRow: ";
	cin >> rowOfQ1;
	cout << "\nEnter the position of second queen : ";
	cout << "\nColoumn: ";
	cin >> coloumnOfQ2;
	cout << "\nRow: ";
	cin >> rowOfQ2;
	chessBoard[rowOfQ1-1][coloumnOfQ1-1] = 1;
	chessBoard[rowOfQ2-1][coloumnOfQ2-1] = 1;
	if (isSafeInRow(chessBoard, 8, 8, coloumnOfQ1-1, rowOfQ1 -1) && isSafeInColoumn(chessBoard, 8, 8, coloumnOfQ1 - 1, rowOfQ1 - 1) && isSafeDiagonally(chessBoard, 8, 8, coloumnOfQ1 - 1, rowOfQ1 - 1))
	{
		cout << "The queen is safe";
	}
	else
	{
		cout << "The queen is not safe";

	}
	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}


bool isSafeInColoumn(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1)
{
	for (int i = rowOfQ1-1; i > 0; i=i-1)
	{
		if (chessBoard[i][coloumnOfQ1]==1)
		{
			return false;
		}
	}
	for (int i = rowOfQ1+1; i < rows; i = i + 1)
	{
		if (chessBoard[i][coloumnOfQ1] == 1)
		{
			return false;
		}
	}
	return true;
}

bool isSafeInRow(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1)
{
	for (int i = coloumnOfQ1-1; i > 0; i = i - 1)
	{
		if (chessBoard[rowOfQ1][i] == 1)
		{
			return false;
		}
	}
	for (int i = coloumnOfQ1+1; i < rows; i = i + 1)
	{
		if (chessBoard[rowOfQ1][i] == 1)
		{
			return false;
		}
	}
	return true;
}

bool isSafeDiagonally(int chessBoard[][8], int coloumns, int rows, int coloumnOfQ1, int rowOfQ1)
{
	for (int i = 1; (coloumnOfQ1+i<coloumns) && (rowOfQ1+i < rows) ; i=i+1)
	{
		if (chessBoard[rowOfQ1+i][coloumnOfQ1+i]==1)
		{
			return false;
		}
	}
	for (int i = 1; ((coloumnOfQ1 - i) >= 0) && ((rowOfQ1 - i) >= 0); i = i + 1)
	{
		if (chessBoard[rowOfQ1 - i][coloumnOfQ1 - i] == 1)
		{
			return false;
		}
	}
	for (int i = 1; ((coloumnOfQ1 + i) <= coloumns) && ((rowOfQ1 - 1) >= 0); i = i + 1)
	{
		if (chessBoard[rowOfQ1 + i][coloumnOfQ1 - i] == 1)
		{
			return false;
		}
	}
	for (int i = 1; ((coloumnOfQ1 - i) >= 0) && ((rowOfQ1 + 1) <= rows); i = i + 1)
	{
		if (chessBoard[rowOfQ1 - i][coloumnOfQ1 + i] == 1)
		{

			return false;
		}
	}
	return true;
}