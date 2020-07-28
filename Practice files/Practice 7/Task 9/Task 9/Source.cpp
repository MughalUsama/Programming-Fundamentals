#define _CRT_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int hours, hoursInput, flag;
	float  bill;
	char package, month[4];
	flag = 1;
	cout << "Package A: For $9.95 per month 10 hours of access is provided. Additional hours are 2.00$ per hour\n";
	cout << "Package B: For $14.95 per month 20 hours of access is provided. Additional hours are 1.00$ per hour\n";
	cout << "Package C: For $19.95 per month unlimited access is provided.\n";
	cout << "Which package have you purchased? (A,B or C): ";
	cin >> package;
	if (package != 'A' && package != 'B' && package != 'C')
	{
		cout << "Select a valid package.'";
	}
	else
	{
		cout << "Enter no of hours used: ";
		cin >> hoursInput;

		cout << "Enter the month(e.g Jan for January): ";
		cin >> month;
		
		if (strcmp(month,"Jan")==0|| strcmp(month, "Mar")==0 || strcmp(month, "May")==0 || strcmp(month, "Jul")==0 || strcmp(month, "Aug")==0 || strcmp(month, "Oct")==0 || strcmp(month, "Dec")==0)
		{
			hours = 744;
			
		}
		else if(strcmp(month, "Apr")==0 || strcmp(month, "Jun")==0 || strcmp(month, "Sep")==0 || strcmp(month, "Nov")==0)
		{
			hours = 720;
			
		}
		else if (strcmp(month, "Feb")==0)
		{
			hours = 672;
			
		}
		else
		{
			flag = 2;
			cout << "Enter month in valid format.";
		}
	}
	

	if (flag=1)
	{
		if (hoursInput<hours)
		{
			if (package = 'A')
			{
				if (hours > 10)
				{
					bill = 9.95 + ((hours - 10) * 2);
				}
				else
				{
					bill = 9.95;
				}
			}
			if (package = 'B')
			{
				if (hours > 20)
				{
					bill = 14.95 + ((hours - 20) * 1);
				}
				else
				{
					bill = 14.95;
				}
			}
			if (package='C')
			{
				bill = 19.95;
			}
			cout << "Your bill is $ " << bill;
		}

		if (hoursInput>hours)
		{
			cout << " number of hours cannot exceed the limit of " << hours << " hours";
		}
	}


	cout << "\n";
	system("pause");
	return 0;
}