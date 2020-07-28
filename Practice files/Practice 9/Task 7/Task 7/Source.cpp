#include <iostream>
using namespace std;
int main()
{
	int noOfYears, totalMonths, yearCounter, month;
	float rainPerMonth, totalRain, averageRain;
	bool validInput1 = true, validInput2;

	//input validation
	while (validInput1)
	{
		cout << "Enter number of years: ";
		cin >> noOfYears;
		if (noOfYears < 1)
		{
			cout << "Enter number of years equal to or less than 1.\n";
		}
		else
		{
			validInput1 = false;
		}
	}
	totalMonths = noOfYears * 12;
	yearCounter = 1;
	totalRain = 0;
	while (yearCounter <= noOfYears)
	{
		month = 1;
		cout << "\n\t       Year no. " << yearCounter;
		while (month <= 12)
		{
			validInput2 = true;
			
			while (validInput2)
			{
				cout << "\nEnter the amount of Rain fall for month " << month << " : ";
				cin >> rainPerMonth;
				if (rainPerMonth >= 0)
				{
					validInput2 = false;
				}
				else
				{
					cout << "\n\t\tEnter a positive value. \n";
				
				}


			}
			totalRain = totalRain + rainPerMonth;
			month = month + 1;
			

		}
		yearCounter = yearCounter + 1;

		
	}
		averageRain = totalRain / totalMonths;
		cout << "\n\tTotal number of months are " << totalMonths;
		cout << "\n\tTotal inches of rainfall are " << totalRain;
		cout << "\n\tAverage rainfall per month is " << averageRain << " inches";
		cout << "\n";
		system("pause");
		return 0;
	
}