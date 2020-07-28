#include <iostream>
#include "Tic-Tac-Toe.h"
using namespace std;



int main()
{
	char playAgain;
	do
	{
		char position[3][3] = { '1','2','3','4','5','6','7','8','9' };
		playGame(position, 3, 3);
		cout << "\nGame Finished";
		cout << "\nDo you want to play again? y/n : ";
		cin >> playAgain;
		while (playAgain!='n' && playAgain != 'Y' && playAgain!='y'&& playAgain != 'N')
		{
			cout << "Please enter a valid choice: ";
			cin >> playAgain;
		}
	} while (playAgain=='y' || playAgain=='Y');


	cout << "\n";
	system("pause");
	return 0;
}
