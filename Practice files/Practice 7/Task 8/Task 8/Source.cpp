#include <iostream>
using namespace std;
int main()
{
	int hours;
	float  bill1,bill2,bill3;
	char package;

	cout << "Package A: For $9.95 per month 10 hours of access is provided. Additional hours are 2.00$ per hour\n";
	cout << "Package B: For $14.95 per month 20 hours of access is provided. Additional hours are 1.00$ per hour\n";
	cout << "Package C: For $19.95 per month unlimited access is provided.\n";
	cout << "Which package have you purchased? (A,B or C): ";
	cin >> package;
	if (package != 'A' && package != 'B' && package != 'C')
	{
		cout << "Select a valid package.";
	}
	else
	{
		cout << "Enter no of hours used: ";
		cin >> hours;
		if (hours>744)
		{
			"number of hours in a month cannot exceed 744.";
		}
		else
		{
			if (hours>10)
			{
				bill1 = 9.95 + ((hours - 10) * 2);
			}
			else
			{
				bill1 = 9.95;
			}
			if (hours>20)
			{
				bill2 = 14.95 + ((hours - 20) * 1);
			}
			else
			{
				bill2 = 14.95;
			}
			bill3 = 19.95;
			
			if (package == 'A')
			{

				cout << "Your bill is $ " << bill1<<"\n" ;
				if (bill1 - bill2 > 0 || bill1 - bill3 > 0)
				{
					if (bill1 - bill2 > 0)
					{
						cout << "You can save $ " << bill1 - bill2 << " on Package B.\n";
					}
					if (bill1 - bill3 > 0)
					{
						cout << "You can save $ " << bill1 - bill3 << " on Package C.\n";
					}
				}
				else
				{
					cout << "You are using least costly package.";
				}
				
			}
			else if (package == 'B')
			{
				
				cout << "Your bill is $" << bill2<<"\n";
				if (bill2 - bill3>0)
				{
					cout << "You can save $ " << bill2 - bill3 << " on Package C.\n";
				}
				else
				{
					cout << "You are using least costly package.";
				}
			}
			else
			{
				cout << "Your bill is $ " << bill3;
			}
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}