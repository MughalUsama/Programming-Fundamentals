#include <iostream>

using namespace std;
int main()
{
	int rangeStart = 0, rangeEnd = 1000, num = 500;
	char flag1, flag2, flag3;
	cout << "Think a number in range between 1-1000 and press enter:\n";
	cin.get();
	cin.ignore(100,'\n');
	
	cout << "Attempt 1:\nIs the number equal to 500? Y/N: ";

	cin >> flag1;
	if (flag1 == 'Y')
	{
		cout << "I guessed your no. It is " << num << "\n";
	}
	else
	{
		cout << "Is the number less than 500? Y/N:";
		cin >> flag2;
		if (flag2 == 'Y')
		{
			rangeEnd = 500-1;
		}
		if (flag2 != 'Y')
		{
			cout << "Your number is greater than 500.";
			flag3 = 'Y';
			rangeStart = 500+1;

		}

	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 2:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num-1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." ;
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
	
		
		cout << "\n\nAttempt 3:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 4:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 5:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{	num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 6:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 7:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 8:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 9:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << "." << "\n";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout << "\n\nAttempt 10:\nIs the number equal to " << num << "?  Y/N: ";
		cin >> flag1;
		if (flag1 == 'Y')
		{
			cout << "I guessed your no. It is " << num << "\n";
		}
		else
		{
			cout << "Is the number less than " << num << "?  Y/N: ";
			cin >> flag2;
			if (flag2 == 'Y')
			{
				rangeEnd = num - 1;
			}
			if (flag2 != 'Y')
			{
				cout << "Your number is greater than " << num << ".";
				flag3 = 'Y';
				rangeStart = num + 1;

			}

		}
	}
	if (flag1 != 'Y')
	{
		num = (rangeStart + rangeEnd) / 2;
		cout <<"\n\tYOU ARE BLUFFING";

	}
	cout << "\n";
		system("pause");
		return 0;
	
}