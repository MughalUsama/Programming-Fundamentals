#include <iostream>
using namespace std;
int main()
{
	float waterUsed, totalBill;
	cout << "Enter amount used in cubic feet: ";
	cin >> waterUsed;
	if (waterUsed<=1000)
	{
		totalBill = 15;
	}
	else if (waterUsed > 1000 && waterUsed <= 2000)
	{
		waterUsed = waterUsed - 1000;
		totalBill = 15 + (waterUsed*0.0175);
	}
	else if (waterUsed > 2000 && waterUsed <= 3000)
	{
		waterUsed = waterUsed - 2000;
		totalBill = (waterUsed*0.02);
		totalBill = 15 + totalBill + (1000*0.0175);
	}
	else if (waterUsed > 3000 )
	{
		totalBill = 70.00;
	}
	cout << "Your bill is: $" << totalBill;
	cout << "\n";
	system("pause");
	return 0;
}