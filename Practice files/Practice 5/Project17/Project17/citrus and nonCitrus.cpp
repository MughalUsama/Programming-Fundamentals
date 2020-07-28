#include <iostream>
using namespace std;
int main()
{
	int surveyedCustomers, weeklyCustomers, citrusCustomers;
	surveyedCustomers = 12467;
	weeklyCustomers = surveyedCustomers / 100 * 14;
	citrusCustomers = weeklyCustomers / 100 * 64;
	cout << "Customers who purchase 1 or more energy drink in a week: " << weeklyCustomers << "\n";
	cout << "Customers who prefers citrus flavoured drinks: " << citrusCustomers << "\n";
	cout << "\n";
	system("pause");
	return 0;
}