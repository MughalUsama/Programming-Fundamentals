#include <iostream>
using namespace std;
int main()
{
	float price1, price2, price3, price4, price5, subTotal, salesTax;
	int totalPrice;
	price1 = 12.95;
	price2 = 24.95;
	price3 = 6.95;
	price4 = 14.95;
	price5 = 3.95;
	subTotal = price1 + price2 + price3 + price4 + price5;
	salesTax = subTotal / 100 * 6;
	totalPrice = subTotal + salesTax;
	cout << "Price of item 1: $" <<price1 << "\n";
	cout << "Price of item 2: $" <<price2 << "\n";
	cout << "Price of item 3: $" <<price3 << "\n";
	cout << "Price of item 4: $" <<price4 << "\n";
	cout << "Price of item 5: $" <<price5 << "\n\n";
	cout << "Subtotal of 5 items: $" << subTotal << "\n";
	cout << "Amount of sales tax: $" << salesTax << "\n";
	cout << "Total Price: $" << totalPrice << "\n";
	system("pause");
	return 0;
}