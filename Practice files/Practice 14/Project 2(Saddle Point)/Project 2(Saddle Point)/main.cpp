#include "SaddlePointApp.h"
#include <iostream>
using namespace std;

int main()
{
	int array[5][5];
	inputArray(array, 5, 5);
	getSaddlePoint(array, 5, 5);
	

	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}
