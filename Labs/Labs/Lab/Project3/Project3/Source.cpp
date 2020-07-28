#include <iostream>
using namespace std;

void calculateRating();
int main()
{


	calculateRating();
	
	cout << "\n";
	system("pause");
	return 0;
}

void calculateRating()
{
	int  noOfMatches;
	int currentRating, totalRating = 0, tempConsistentSum=0, consistentSum=0;
	cin >> noOfMatches;
	for (int i =1; i <= noOfMatches; i=i+1)
	{
		cin >> currentRating;
		totalRating = consistentSum + currentRating;
		if (totalRating>=0)
		{

			if (totalRating>=tempConsistentSum)
			{
				tempConsistentSum = totalRating;
			}

			consistentSum = consistentSum + currentRating;
			
		}
		else
		{
			if (consistentSum<0)
			{

				consistentSum = 0;
			}

		}

	}
	if (tempConsistentSum>=consistentSum)
	{
		cout << tempConsistentSum;
	}
	else if (tempConsistentSum<consistentSum)
	{
		cout << consistentSum;
	}
	else
	{
		cout << 0;
	}
}