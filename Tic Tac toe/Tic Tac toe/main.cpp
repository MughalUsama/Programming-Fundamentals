#include <iostream>
#include "Tic-Tac-Toe.h"
using namespace std;

int main()
{
	char playAgain;
	do
	{
		char position[3][3] = { '1','2','3','4','5','6','7','8','9' };
		char positionSolo[3][3] = { '1','2','3','4','5','6','7','8','9' };

		int option;
		do
		{
			cout << "\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
			cout << "\n\t\t\t\t\tEnter ' 1 ' for single player game.";
			cout << "\n\t\t\t\t\tEnter ' 2 ' for two players game.";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";

			cout << "\nEnter your choice ! :  ";
			cin >> option;
			cout << "\n\n";
			if (option!=1 && option!=2)
			{
				cout << "\n\t\t   You Entered Wrong Choice!";
				cout << "\n----------------------------------------------------------------------------------------\n";
			}
			else if (option == 1)
			{
				soloGame(position,positionSolo, 3, 3);
			}
			else
			{
				playGame(position, 3, 3);
			}
		} while (option!=1 && option != 2);



		cout << "\n\n\t\t\t\t\t             Game Finished";
		cout << "\n-----------------------------------------------------------------------------------------------------------------------";
		cout << "\n\nDo you want to play again? y/n : ";
		cin >> playAgain;
		while (playAgain != 'n' && playAgain != 'Y' && playAgain != 'y'&& playAgain != 'N')
		{
			cout << "Please enter a valid choice: ";
			cin >> playAgain;
		}
	} while (playAgain == 'y' || playAgain == 'Y');


	cout << "\n";
	system("pause");
	return 0;
}