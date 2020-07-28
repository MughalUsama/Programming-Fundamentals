#include <iostream>
#include "SetOperations.h"
using namespace std;

int main()
{
	int * set;
	int setCapacity = 10;
	int setNOE = 0;

	createSet(set, setCapacity);
	addElement(set, setNOE, setCapacity, 5);
	addElement(set, setNOE, setCapacity, 7);
	addElement(set, setNOE, setCapacity, 8);

	searchElement(set, setNOE, 7);
	displaySet(set, setNOE);

	cout << "\n";
	system("pause");
	return 0;
}