#include <iostream>
using namespace std;
int main() 
{
	float payAmount = 1700.0;
	float payPeriods = 26;
	float annualPay;
	annualPay = payAmount * payPeriods;
	cout << "Total annual pay : " << annualPay;
	cout << "\n";
	system("pause");
	return 0;

}