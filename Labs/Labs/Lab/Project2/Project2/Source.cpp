#include <iostream>
using namespace std;

void calculateRemainingCandies();
int main()
{
	int  noOfTestCases;
	cin >> noOfTestCases;
	
	for (int i = 1; i <= noOfTestCases; i = i + 1)
	{
		calculateRemainingCandies();
	}
	cout << "\n";
	system("pause");
	return 0;
}
void calculateRemainingCandies()
{
	int totalCandies, remainingCandies, noOfDays;
	cin >> totalCandies >> noOfDays;
	remainingCandies = totalCandies;

	for ( int i = 1; i <= noOfDays; i=i+1)
	{
		int candiesTakenAt9, candiesTakenAt10;
		if (remainingCandies%2==0 && remainingCandies>0)
		{
			candiesTakenAt9 = remainingCandies / 2;
			if (candiesTakenAt9 < remainingCandies)
			{
				remainingCandies = remainingCandies - candiesTakenAt9;
			}
		}
		else
		{
			candiesTakenAt9 = (remainingCandies + 10 / 2);
			if (candiesTakenAt9 < remainingCandies)
			{
				remainingCandies = remainingCandies - candiesTakenAt9;
			}

		}

		
			candiesTakenAt10 = remainingCandies / 4;
			if (candiesTakenAt10 < remainingCandies)
			{
				remainingCandies = remainingCandies - candiesTakenAt10;
			}
		
	}
	cout << remainingCandies <<"\n";
}