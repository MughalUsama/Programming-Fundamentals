#include <iostream>
#include "MySets.h"
using namespace std;


void createSet(int ** set, int n)
{
	*set = new int[n];
}

bool addElement(int * set, int * noe, int capacity, int element) 
{
	if (capacity> *noe)
	{
		set[*noe] = element;
		*noe = *noe + 1;
		return true;

	}
	else
	{
		false;
	}
	
}

bool searchElement(int * set, int noe, int element)
{
	int i = 0;
	while (i<= noe)
	{
		if (set[i]== element)
		{
			return true;
		}
		i = i + 1;
	}
	return false;
}
bool isEmpty(int noe)
{
	if (noe==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(int noe, int capacity)
{
	if (noe == capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void displaySet(int * set, int noe)
{
	for (int i = 0; i < noe; i=i+1)
	{
		cout << set[i] << "\n";
	}
}