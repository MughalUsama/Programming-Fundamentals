#include <iostream>
#include <ctime>
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
		while (!(fillBoard(position, noOfColoumns, noOfRows, enteredPosition, playerNo)))
		{
			cout << "\nYou entered wrong position. Please enter again! :";
			cin >> enteredPosition;
		}
		if (isGameFinished(position, noOfRows, noOfColoumns))
		{
			cout << "\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";

			cout << "\n\n\t\t\t\t\t     Player " << playerNo << " has won the game\n";
			cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
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
	cout << "\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
	cout << "\n\n\t\t\t\t\t     The Game is Drawn\n\n";
	cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";

	drawBoard(position);

}


void soloGame(char position[][3], char positionSolo[][3], int noOfRows, int noOfColoumns)
{
	int playerNo = 1;
	char enteredPosition;
	while (!isBoardFull(position, noOfColoumns, noOfRows))
	{
		
		if (playerNo == 1)
		{
			drawBoard(position);
			cout << "\n\nPlayer no " << playerNo << "! Enter Your Choice . 1-9: ";
			cin >> enteredPosition;
			fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, playerNo);
			while (!(fillBoard(position, noOfColoumns, noOfRows, enteredPosition, playerNo)))
			{
				cout << "\nYou entered wrong position. Please enter again! :";
				cin >> enteredPosition;
			}
		}
		else  //for computer
		{

			enteredPosition = '1';
			int pos = 1;
			bool isFilled = false;

			if ((fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 2))) //filling to check if computer is winning
			{
				isFilled = true;
			}

			while ((!isGameFinished(positionSolo, noOfRows, noOfColoumns)) && pos <= 9)
			{
				pos++;
				if (isFilled)
				{
					(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 0));//filling back if computer is not winning
				}

				enteredPosition = char(pos) + '0';
				if (fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 2))//filling to check if computer is winning
				{
					isFilled = true;
				}
				else
				{
					isFilled = false;
				}

			}

			if (isGameFinished(positionSolo, noOfRows, noOfColoumns)) // if user is winning
			{
				(fillBoard(position, noOfColoumns, noOfRows, enteredPosition, playerNo));// enter your own in original
			}//------------
			if (!isGameFinished(positionSolo, noOfRows, noOfColoumns))
			{


				enteredPosition = '1';
				pos = 1;
				isFilled = false;

				if ((fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 1))) //filling to check if user is winning
				{
					isFilled = true;
				}

				while ((!isGameFinished(positionSolo, noOfRows, noOfColoumns)) && pos <= 9)
				{
					pos++;
					if (isFilled)
					{
						(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 0));//filling back if user is not winning
					}

					enteredPosition = char(pos) + '0';
					if (fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 1))//filling to check if user is winning
					{
						isFilled = true;
					}
					else
					{
						isFilled = false;
					}

				}

				if (isGameFinished(positionSolo, noOfRows, noOfColoumns)) // if user is winning 
				{
					(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 0)); // remove users symbol
					(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, playerNo));// enter your own in solo
					(fillBoard(position, noOfColoumns, noOfRows, enteredPosition, playerNo));// enter your own in original
				}
				else
				{
					(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, 0)); // if game is not finished 
					srand(time(0));
					enteredPosition = char(1 + rand() % 9) + '0';
					while (!(fillBoard(position, noOfColoumns, noOfRows, enteredPosition, playerNo))) //fill random value in original
					{
						enteredPosition = char(1 + rand() % 9) + '0';
					}
					(fillBoard(positionSolo, noOfColoumns, noOfRows, enteredPosition, playerNo)); // fill random value in solo
				}
			}

		}
		
		if (isGameFinished(position, noOfRows, noOfColoumns))
		{
			if (playerNo == 1)
			{
				cout << "\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
				cout << "\n\t\t\t\t\t       You" << " have won the game\n";
				cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
			}
			else
			{
				cout << "\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
				cout << "\n\t\t\t\t\t       Computer" << " has won the game\n";
				cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
			}
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

	cout << "\n\n\t\t\t\t\t       The Game is Drawn\n\n";
	drawBoard(position);

}