#include <iostream>
using namespace std;
int getSummation(int ratings[], int noOfPersons);

int main()
{
	int ratings[5000];
	int noOfPersons;
	cin >> noOfPersons;
	for (int i = 0; i < noOfPersons; i=i+1)
	{
		cin >> ratings[i];
	}
	cout << getSummation(ratings, noOfPersons);
	cout << "\n";
	system("pause");
	return 0;
}

int getSummation(int ratings[], int noOfPersons)
{
	int summation = 0;
	int lastRating =0;
	for (int i = 0; i < noOfPersons; i = i + 1)
	{
		summation = ratings[i] + summation;
		if (ratings[i]==0 && i>0 && ratings[i-1]!=0)
		{
			summation = summation - lastRating;
		}
		else
		{
			lastRating = ratings[i];
		}
	}
	return summation;
}
