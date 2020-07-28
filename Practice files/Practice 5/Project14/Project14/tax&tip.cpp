#include <iostream>
using namespace std;
int main()
{
	float mealCharge,ChargeWithTax, tax, tip, totalBill;
	mealCharge = 44.50;
	tax = mealCharge / 100 * 6.75;
	ChargeWithTax = mealCharge + tax;
	tip = ChargeWithTax / 100 * 15;
	totalBill = tip + ChargeWithTax;
	cout << "Meal cost is: " << mealCharge << "\n";
	cout << "Tax amount is: " << tax << "\n";
	cout << "Tip amount is: " << tip << "\n";
	cout << "Total bill is: " << totalBill << "\n";
	cout << "\n";
	system("pause");
	return 0;
}