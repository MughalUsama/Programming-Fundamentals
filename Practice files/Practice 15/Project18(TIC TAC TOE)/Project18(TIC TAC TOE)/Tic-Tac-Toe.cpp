#include <iostream>
#include "Tic-Tac-Toe.h"
#include "Tic-Tac-Toe-Operations.h"
using namespace std;


void playGame(char position[][3], int noOfRows, int noOfColoumns)
{
	int playerNo = 1;
	char enteredPosition;
	while (!isBoardFull(position, noOfColoumns, noOfRows))
	{
		drawBoard(position);
		cout << "\n\nPlayer no " << playerNo << "! Enter Your Choice . 1-9: ";
		cin >> enteredPosition;
		while (!(fillBoard(position, noOfColoumns, noOfColoumns, enteredPosition, playerNo)))
		{
			cout << "\nYou entered wrong position. Please enter again! :";
			cin >> enteredPosition;
		}
		if (isGameFinished(position, noOfRows, noOfColoumns))
		{
			cout << "\n\n\t\tPlayer " << playerNo << " has won the game\n";
			drawBoard(position);
			return;
		}
		if (playerNo == 1)
		{
			playerNo = 2;
		}
		else
		{
			playerNo = 1;
		}
	}

	cout << "\n\nThe Game is Drawn\n\n";
	drawBoard(position);

}