#include <iostream>
using namespace std;
int main()
{
	int hours;
	float  bill;
	char package;
	
	cout << "Package A: For $9.95 per month 10 hours of access is provided. Additional hours are 2.00$ per hour\n";
	cout << "Package B: For $14.95 per month 20 hours of access is provided. Additional hours are 1.00$ per hour\n";
	cout << "Package C: For $19.95 per month unlimited access is provided.\n";
	cout << "Which package have you purchased? (A,B or C): ";
	cin >> package;
	if (package!='A' && package != 'B' && package != 'C')
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
			if (package=='A')
			{
				if (hours<10)
				{
					cout << "Your bill is $ 9.95";
				}
				else
				{
					bill = 9.95 + ((hours - 10) * 2);
					cout << "Your bill is $" << bill;
				}
			}
			else if (package == 'B')
			{
				if (hours < 20)
				{
					cout << "Your bill is $ 14.95";
				}
				else
				{
					bill = 14.95 + ((hours - 20) * 1);
					cout << "Your bill is $" << bill;
				}
			}
			else
			{
				bill = 19.95;
				cout << "Your bill is $" << bill;
			}
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}
