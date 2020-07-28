#include <iostream>
#include <ctime>

using namespace std;
int countCommonDigits(int [], int []);
void generateRandomNumbers(int[]);
int main()
{
	int lotteryArray[5], userArray[5], noOfCommonDigits;
	srand(time(0));
	for (int i = 0; i < 5; i=i+1)
	{
		cout << "\nEnter digit no " << i + 1<<" : ";
		cin >> userArray[i];
	}

	generateRandomNumbers(lotteryArray);
	noOfCommonDigits = countCommonDigits(userArray, lotteryArray);
	if (noOfCommonDigits == 5)
	{
		cout << "\n\t\t^^Congratulations, You have won the grand prize.^^";
	}
	else
	{
		cout << "\n\t\tThere is "<<noOfCommonDigits <<" common digits in your lottery number and grand prize\n" ;
	}
	cout << "\n";
	cin.ignore();
	cin.get();
	return 0;
}

void generateRandomNumbers(int lotteryArray[])
{
	for (int i = 0; i < 5; i = i + 1)
	{
		lotteryArray[i] = rand() % 10;
		cout << lotteryArray[i];
	}
}

int countCommonDigits(int userArray[], int lotteryArray[])
{
	int count = 0;
	for (int i = 0; i < 5; i=i+1)
	{
		if (userArray[i]==lotteryArray[i])
		{
			count = count + 1;
		}
	}
	return count;
}