#include <iostream>
#include "MySets.h"
using namespace std;

int main()
{
	int * set;
	int setCapacity = 10; 
	int setNOE = 0;

	createSet(&set, setCapacity);
	addElement(set, &setNOE, setCapacity, 5);
	searchElement(set, setNOE, 5);
	displaySet(set, setNOE);
	cout << "\n";
	system("pause");
	return 0;
}