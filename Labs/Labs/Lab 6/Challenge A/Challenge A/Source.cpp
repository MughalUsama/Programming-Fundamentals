/* next date finder.*/

#include <iostream>
using namespace std;
int main()
{
	int year, month, day, daysInMonth;
	bool validInput = true, leapYear;
	// valid year
	while (validInput)
	{
		cout << "Enter the year : ";
		cin >> year;
		if (year <= 9999 && year > 0)
		{
			validInput = false;
		}
		else
		{
			cout << "\nEnter year in range of 1-9999.";
		}
	}
	//checking leap year
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leapYear = true;
			}
			else
			{
				leapYear = false;
			}
		}
		else
		{
			leapYear = true;
		}


	}
	else
	{
		leapYear = false;
	}

	// valid month
	while (validInput == false)
	{
		cout << "Enter the month: ";
		cin >> month;
		if (month <= 12 && month > 0)
		{
			validInput = true;
		}
		else
		{
			cout << "\nEnter month in range of 1-12.";
		}
	}
	// valid day
	while (validInput)
	{
		cout << "Enter the day: ";
		cin >> day;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			daysInMonth = 31;
		}
		else if (month == 2)
		{
			if (leapYear)
			{
				daysInMonth = 29;
			}
			else
			{
				daysInMonth = 28;
			}
		}
		else
		{
			daysInMonth = 30;

		}
		if (day <=daysInMonth && day>0)
		{
			validInput = false;

		}
		else
		{
			cout << "\nEnter valid day. In range of 1-"<<daysInMonth<<".\n";
		}
	}
	
	if (day==daysInMonth)
	{
		day = 1;
		month = month + 1;
		if (month>12)
		{
			month = 1;
			year = year + 1;
		}
	}
	else
	{
		day = day + 1;
	}
	cout << "\n\t\tNext date is ";
	cout << day << "-" << month << "-" << year << "\n";

	cout << "\n";
	system("pause");
	return 0;
}