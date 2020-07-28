

#include<iostream>
#include<time.h>
using namespace std;

void drawTable(char ='1', char = '2', char = '3', char = '4', char = '5', char = '6', char = '7', char = '8', char = '9');
void playGame(char [20], char [20]);
int validateInput(int);
int main()
{
	char name1[20], name2[20], player1[20], player2[20];
	cout << "\t\t\tEnter the name of player 1: ";
	cin >> name1;
	cout << "\t\t\tEnter the name of player 2: ";
	cin >> name2;
	cout << "\n\n\t\t\tToss for first turn \n";
	int tossCall;
	cout  << "\t" <<name1 << ", what's your call? \n\tEnter 1 for head or 2 for tail\n \t1 OR 2:- ";
	cin >> tossCall;
	srand(time(0));
	if (1 + rand() % 2 == tossCall)
	{
		cout << "> Its " << name1 << "'s turn";
		strcpy_s(player1, name1);
		strcpy_s(player2, name2);
	}
	else
	{
		cout << "> Its " << name2 << "'s turn";
		strcpy_s(player1, name2);
		strcpy_s(player2, name1);
	}
	cout << "\n";

	drawTable();
	playGame(player1, player2);
	
	cout << "\n";
	system("pause");
	return 0;
}

void drawTable(char choice1, char choice2, char choice3, char  choice4, char  choice5, char choice6, char choice7, char choice8, char  choice9)
{
	cout << "\t\t\t|     |             \n";
	cout << "\t\t    "<<choice1<<"   |  "<<choice2<<"  |   "<<choice3<<"            \n";
	cout << "\t\t________|     |________     \n";
	cout << "\t\t\t|     |             \n";
	cout << "\t\t    "<<choice4<<"   |  "<<choice5<<"  |   "<<choice6<<"           \n";
	cout << "\t\t________|     |________     \n";
	cout << "\t\t\t|     |             \n";
	cout << "\t\t    "<<choice7<<"   |  "<<choice8<<"  |   "<<choice9<<"            \n";
	cout << "\t\t\t|     |             \n";
}

void playGame(char player1[20], char player2[20])
{
	for (int i = 1; i <= 5 ; i=i+1)
	{
		int playerOneTurn, playerTwoTurn;
		cout << player1 << "'s turn";
		cin >> playerOneTurn;
		validateInput(playerOneTurn);
		cout << player2 << "'s turn";
		cin >> playerTwoTurn;
		validateInput(playerTwoTurn);
		
	}
}

int validateInput(int turn)
{

	if (!(turn>0 && turn<10))
	{
		cout << "Wrong choice!\n";
		cout << "Enter correct choice: ";
		cin >> turn;
	}
	return turn;
}