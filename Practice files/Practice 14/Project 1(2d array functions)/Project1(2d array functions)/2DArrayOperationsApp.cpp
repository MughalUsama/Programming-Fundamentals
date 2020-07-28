#include <iostream> 
#include "2DArrayOperations.h"
#include "2DArrayOperationsApp.h"
using namespace std;

void arrayFunctions(int array[][5], int rows, int coloumns)
{
	int choice;
	bool appRunFlag = true;
	do
	{
		cout << "\n\n\t\t\t\t  |||||||||||| 2-D ARRAY OPERATIONS ||||||||||||\n";
		cout << "\n\t\t\t\t Enter 1 ~ To GET TOTAL . ";
		cout << "\n\t\t\t\t Enter 2 ~ To GET AVERAGE . ";
		cout << "\n\t\t\t\t Enter 3 ~ To GET ROW TOTAL . ";
		cout << "\n\t\t\t\t Enter 4 ~ To GET COLOUMN TOTAL . ";
		cout << "\n\t\t\t\t Enter 5 ~ To GET HIGHEST IN ROW . ";
		cout << "\n\t\t\t\t Enter 6 ~ To GET LOWEST IN ROW . ";
		cout << "\n\t\t\t\t Enter 0 ~ To EXIT . \n\t Enter your choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "\n\tThe total is " << getTotal(array, rows, coloumns);
			break;
		}
		case 2:
		{
			cout << "\n\tThe average is " << getAverage(array, rows, coloumns);
			break;
		}
		case 3:
		{
			int rowNo;
			cout << "\n\tEnter the row no to get a total : ";
			cin >> rowNo;
			cout << "\n\tThe row total is " << getRowTotal(array, rows, coloumns, rowNo);
			break;
		}
		case 4:
		{
			int coloumnNo;
			cout << "\n\tEnter the coloumn no to get a total : ";
			cin >> coloumnNo;
			cout << "\n\tThe coloumn total is " << getColoumnTotal(array, rows, coloumns, coloumnNo);
			break;
		}
		case 5:
		{
			int rowNo;
			cout << "\n\tEnter the row no to get a highest in row : ";
			cin >> rowNo;
			cout << "\n\tThe highest in row is " << getHighestInRow(array, rows, coloumns, rowNo);
			break;
		}
		case 6:
		{
			int rowNo;
			cout << "\n\tEnter the row no to get lowest in row : ";
			cin >> rowNo;
			cout << "\n\tThe lowest in row is " << getLowestInRow(array, rows, coloumns, rowNo);
			break;
		}
		case 0:
		{
			appRunFlag = false;
			break;
		}
		default:
			cout << "\n\t\t\t\tEnter a valid option!";
			break;
		}
	} while (appRunFlag);
}