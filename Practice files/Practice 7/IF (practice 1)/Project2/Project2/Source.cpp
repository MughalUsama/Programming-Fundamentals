#include <iostream>
using namespace std;
int main()
{
	int weekDay;
	cout << "Enter week day : ";
	cin >> weekDay;
	if (weekDay==1)
	{
		cout << "MONDAY";
	}
	else if (weekDay==2)
	{
		cout << "TUESDAY";
	}
	else if (weekDay == 3)
	{
		cout << "WEDNESDAY";
	}
	else if (weekDay == 4)
	{
		cout << "THURSDAY";
	}
	else if (weekDay == 5)
	{
		cout << "FRIDAY";
	}
	else if (weekDay == 6)
	{
		cout << "SATURDAY";
	}
	else if (weekDay == 7)
	{
		cout << "SUNDAY";
	}
	else
	{
		cout << "ENTER A VALID NO.";
	}
	cout << "\n";
	system("pause");
	return 0;
}