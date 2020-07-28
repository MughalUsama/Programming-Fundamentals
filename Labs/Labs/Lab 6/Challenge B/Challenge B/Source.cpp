#include <iostream>
using namespace std;
int main()
{
	int amountOfRupees, costPerChoc, noOfChoc, noOfChoc1, noOfWrappers;
	cout << "How many rupees do you have? ";
	cin >> amountOfRupees;
	cout << "How much does a chocolate cost? ";
	cin >> costPerChoc;
	noOfChoc = amountOfRupees / costPerChoc;
	noOfWrappers = noOfChoc;
	while (noOfWrappers>2)
	{
		// 1 chocolate for 3 wrappers.
		noOfChoc1 = noOfWrappers / 3;
		// finding remaining wrappers.
		noOfWrappers = noOfWrappers - (noOfChoc1 * 3) + noOfChoc1;
		// total chocolates from wrappers and bought for money.
		noOfChoc = noOfChoc + noOfChoc1;
	}
	cout << noOfChoc;
	cout << "\n";
	system("pause");
	return 0;
}