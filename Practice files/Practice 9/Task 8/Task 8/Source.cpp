#include <iostream>
using namespace std;
int main()
{
	float startTime, minutesOfCall, costOfCall;
	bool validInput = true;
	
	while (validInput)
	{
		cout << "Enter starting time of call (HH.MM): ";
		cin >> startTime;
		if ((startTime - (int)startTime) < 60 && startTime < 24)
		{
			validInput = false;
		}
		else
		{
			cout << "Enter valid time.\n";
		}
	}

	cout << "Enter no of minutes of call: ";
	cin >> minutesOfCall;
	if (startTime >= 00.00 && startTime < 7)
	{
		costOfCall = 0.12*minutesOfCall;
	}
	else if (startTime >= 07.00 && startTime <= 19.00)
	{
		costOfCall = 0.55*minutesOfCall;
	}
	else if (startTime >= 19.01 && startTime < 24)
	{
		costOfCall = 0.35*minutesOfCall;
	}
	cout << "Your call charges are: " << costOfCall;

	cout << "\n";
	system("pause");
	return 0;
}