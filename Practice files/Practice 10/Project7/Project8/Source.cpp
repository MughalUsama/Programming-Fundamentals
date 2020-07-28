#include <iostream>
using namespace std;

int calculateRetail(double wholeSalePrice, double MarkupPercentage)
{
	int retailPrice = wholeSalePrice + (wholeSalePrice / 100 * MarkupPercentage);
	return retailPrice;
}

int main()
{

	double wholeSaleCost, markupPercentage;
	
	do
	{
		cout << "Enter the wholesale cost of item : ";
		cin >> wholeSaleCost;
		if (wholeSaleCost<0)
		{
			cout << "Enter positive value.\n";
		}
	} while (wholeSaleCost < 0);


	do
	{
		cout << "Enter the markup pecentage of item : ";
		cin >> markupPercentage;
		if (markupPercentage<0)
		{	
			cout << "Enter positive value.\n";
		}	
	}
	while (markupPercentage<0);
	cout << "Retail price is " << calculateRetail(wholeSaleCost, markupPercentage);

	cout << "\n";
	system("pause");
	return 0;
}