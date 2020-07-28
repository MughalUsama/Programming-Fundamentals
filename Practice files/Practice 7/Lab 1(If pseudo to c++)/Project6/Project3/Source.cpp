#include <iostream>
using namespace std;
int main()
{
	
	float costOne, costTwo, sheets;
	cout << "Enter no of sheets: ";
	cin >> sheets;
	if (sheets<=100)
	{
			costOne = 0.1*sheets;
		costTwo = 0.055 * 100;
		if (costOne < costTwo)
		{
			cout << sheets << " no. of sheets.";
		}
		else
		{
			cout << "1 bundle of 100 sheets.";
		}
	}
	else if (sheets>100 && sheets <=500)
	{
		costOne = 0.055 * 100*(sheets/100);
		costTwo = 0.04 * 500;
		if (costOne < costTwo)
		{
			cout << sheets/100 << " bundles of 100 sheets";
		}
		else
		{
			cout << "1 bundle of 500 sheets.";
			
		}

	}
	else if (sheets>500 && sheets <=1000)
	{
		costOne = 0.04 * 500*(sheets / 500);
		costTwo = 0.03 * 1000;
		if (costOne < costTwo)
		{
			cout << sheets / 500 << " bundles of 500 sheets";
		}
		else
		{
			cout << "1 bundle of 1000 sheets.";

		}
	}
	else if (sheets> 1000)
	{
		costOne = 0.04 * 500 * (sheets / 500);
		costTwo = 0.03 * 1000*(sheets/1000);
		if (costOne < costTwo)
		{
			cout << sheets / 500 << " bundles of 500 sheets";
		}
		else
		{
			cout << sheets/1000 << " bundles of 1000";

		}
	}
	cout << "\n";
	system("pause");
	return 0;
}