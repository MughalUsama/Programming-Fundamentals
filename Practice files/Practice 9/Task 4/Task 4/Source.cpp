#include <iostream>
using namespace std;
int main()
{
	
	char flag1, flag2, flag3;
	int rangeStart, rangeEnd, number, attempt;
	cout << "Enter the lower limit: ";
	cin >> rangeStart;
	cout << "Enter the upper limit: ";
	cin >> rangeEnd;
	attempt = 1;
	flag1 = false;
	flag2 = true;
	flag3 = true;
	while (flag1!='y')
	{
		cout << "\n\n\tAttempt " << attempt;
		number = (rangeStart + rangeEnd)/2;
		cout << "\nIs the number equal to "<<number<<"? y/n : ";
		cin >> flag1;
		if (flag1 != 'y')
		{
			cout << "Is the number less than " << number << "? y/n : ";
			cin >> flag2;
			if (flag2=='y')
			{
				rangeEnd = number;
			}
		}
		if (flag2!='y' && flag1!='y')
		{
			cout << "The number greater than " << number << ".\n";
			rangeStart = number;
		}
		
		attempt = attempt + 1;
	}
	cout << "\n Your number is " << number;
	cout << "\n";
	system("pause");
	return 0;
}