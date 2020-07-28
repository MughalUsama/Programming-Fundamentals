#include <iostream>
using namespace std;
int main()
{
	float gasMileage, tankCapacity, milesPerTank;
	cout << "Enter miles covered per tank: ";
	cin >> milesPerTank;
	cout << "Enter the no. of gallons of gas car can hold: ";
	cin >> tankCapacity;
	gasMileage = milesPerTank / tankCapacity;
	cout << "Miles per gallon: " << gasMileage;
	cout << "\n";
	system("pause");
	return 0;
}