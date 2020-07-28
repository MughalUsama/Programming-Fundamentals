#include <iostream>
using namespace std;
int main()
{
	int totalHours, regularPay, overTimePay, totalPay, ratePerHour;
	cout << "Enter hours worked: ";
	cin >> totalHours;
	cout << "Enter rate per hour: ";
	cin >> ratePerHour;
	if (totalHours<=40)
	{
		regularPay = totalHours * ratePerHour;
		cout << "Regular pay: " << regularPay << "\n";
		cout << "Overtime pay : 0 \n";
		totalPay = regularPay;
		cout << "Total pay: " << totalPay;
	}
	else
	{
		regularPay = 40 * ratePerHour;
		cout << "Regular pay is: " << regularPay<< "\n";
		overTimePay = (totalHours - 40)*ratePerHour + ((totalHours - 40)*ratePerHour * 50 / 100);
		cout << "Overtime pay is: " << overTimePay << "\n";
		totalPay = regularPay + overTimePay;
		cout << "Total pay is: " << totalPay;
	}
	cout << "\n";
	system("pause");
	return 0;
}