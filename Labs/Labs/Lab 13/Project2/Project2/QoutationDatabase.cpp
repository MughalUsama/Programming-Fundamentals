#include <iostream>
#include "QoutationDatabase.h"
using namespace std;

void createQuotationsDatabase(char * * & quoteList, char * * & authList, int size)
{
	quoteList = new char *[size];
	authList = new char *[size];
}

void addQuotation(char * * & quoteList, char * * & authList, int & numOfQuotes, int & capacity, char * quote, char * author)
{
	if (isFull(numOfQuotes, capacity))
	{
		quoteList = resizeArray(quoteList, capacity, numOfQuotes);
		authList = resizeArray(authList, capacity,numOfQuotes);
		capacity = capacity + 5;
	}
	int strLength = getLength(quote);
	char * quo = new char[strLength+1];
	quo = quote;
	quoteList[numOfQuotes] = quo;
	strLength = getLength(author);
	char * auth = new char[strLength + 1];
	auth = author;
	authList[numOfQuotes] = auth;

	
	numOfQuotes = numOfQuotes + 1;
	
}

void displayAuthorWise(char *author, char * * & quoteList, char * * & authList, int & numOfQuotes)
{
	cout << author << " : \n";
	for (int i = 0; i <numOfQuotes ; i=i+1)
	{

		if (isStringSame(author, authList[i]))
		{
			cout << "\t" <<quoteList[i] << "\n";
		}
	}
}




bool isStringSame(char * author, char * listName)
{
	int i = 0;
	while (author[i]!='\0')
	{
		if (author[i]==listName[i])
		{
			i = i + 1;
		}
		else
		{
			return false;
		}
	}
	if (listName[i]== '\0')
	{
		return true;
	}
	return false;
}

bool isFull(int nOE, int capacity)
{
	if (nOE==capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

char ** resizeArray(char * * & arr, int & capacity, int nOE)
{
	char ** newArr = new char *[capacity + 5];
	for (int i = 0; i <nOE ; i=i+1)
	{
		newArr[i] = arr[i];
	}
	deallocateArray(arr, capacity);
	return newArr;

}

int getLength(char * str)
{
	int length = 0;
	while (str[length]!='\0')
	{
		length = length + 1;
	}
	return length + 1;
}

