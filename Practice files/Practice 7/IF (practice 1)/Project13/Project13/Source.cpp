#include <iostream>
using namespace std;
int main()
{
	int time;
	cout << "Enter time in 24-hour format: ";
	cin >> time;
	if (time < 12 && time > 0)
	{
		cout << "Time in 12-hour format: " << time << " am";
	}
	else if (time==12)
	{
		cout << "Time in 12-hour format: 12 pm";
	}
	else if (time==13)
	{
		cout << "Time in 12-hour format: 1 pm";
	}
	else if (time == 14)
	{
		cout << "Time in 12-hour format: 2 pm";
	}
	else if (time == 15)
	{
		cout << "Time in 12-hour format: 3 pm";
	}
	else if (time == 16)
	{
		cout << "Time in 12-hour format: 4 pm";
	}
	else if (time == 17)
	{
		cout << "Time in 12-hour format: 5 pm";
	}
	else if (time == 18)
	{
		cout << "Time in 12-hour format: 6 pm";
	}
	else if (time == 19)
	{
		cout << "Time in 12-hour format: 7 pm";
	}
	else if (time == 20)
	{
		cout << "Time in 12-hour format: 8 pm";
	}
	else if (time == 21)
	{
		cout << "Time in 12-hour format: 9 pm";
	}
	else if (time == 22)
	{
		cout << "Time in 12-hour format: 10 pm";
	}
	else if (time == 23)
	{
		cout << "Time in 12-hour format: 11 pm";
	}
	else if (time == 00)
	{
		cout << "Time in 12-hour format: 12 am";
	}
	cout << "\n";
	system("pause");
	return 0;
}