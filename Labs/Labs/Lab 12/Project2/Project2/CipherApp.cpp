#include <iostream>
#include "CipherApp.h"
using namespace std;

void cipherText(char key[], char string1[], char cipherArray[])
{
	int rowNumbers[30], coloumnNumbers[30];
	convertKeyToRowNo(key, rowNumbers, 27);
	convertStringToColoumnNo(string1, coloumnNumbers);
	convertToAlphabets(rowNumbers, coloumnNumbers, cipherArray, string1, 27);
	for (int i = 0; i <= 27; i++)
	{
		cout << rowNumbers[i];
	}
}


void convertKeyToRowNo(char key[], int rowNumbers[], int stringLength)
{
	int i = 0, j = 0 ;
	while (i<=stringLength)
	{
		if ((int) key[j]>= 65 && (int) key[j] <= 90)
		{

			rowNumbers[i] = (int)key[j] - 'A';

		}
		else if ((int)key[j] >= 97 && (int)key[j] <= 122)
		{

			rowNumbers[i] = (int)key[j] - 'a'+27;
		}
		else
		{
			rowNumbers[i] = -1;

		}
		j = j + 1;
		i = i + 1;
		if (key[j] == '\0')
		{
			j = 0;
		}
	}
}

void convertStringToColoumnNo(char string1[], int coloumnNumbers[])
{
	int j = 0;
	while (string1[j] != '\0')
	{
			if ((int)string1[j] >= 65 && (int)string1[j] <= 90)
			{

				coloumnNumbers[j] = (int)string1[j] - 'A';

			}
			else if ((int)string1[j] >= 97 && (int)string1[j] <= 122)
			{

				coloumnNumbers[j] = (int)string1[j] - 'a' +27;
			}
			else
			{
				coloumnNumbers[j] = -1;

			}
			j = j + 1;
	}
}

void convertToAlphabets(int rowNo[], int coloumnNo[], char cipherArray[], char string1[], int stringLength)
{
	int j;
	for (int i = 0; i < stringLength; i = i + 1)
	{
		if (rowNo[i] >= 0  && coloumnNo[i] >=0 && rowNo[i] <= 26 && coloumnNo[i] <= 26)
		{
			cipherArray[i] = (char)((rowNo[i] + coloumnNo[i]) % 26 + 65);
		}
		else if (rowNo[i] >= 27 && coloumnNo[i] >= 27)
		{
			cipherArray[i] = (char)((rowNo[i] + coloumnNo[i]) % 27 + 97);

		}
		else
		{
			cipherArray[i] = string1[i];
		}
		j = i;
	}
	cipherArray[j + 1] = '\0';
}