#include <iostream>
using namespace std;
int main()
{
	int height, counter, counter1, num;
	cout << "Enter the height: ";
	cin >> height;
	counter = 1;
	while (counter <= height)
	{
		counter1 = 1;
		if (counter1 == 1 )
		{
			while (counter1 <= counter)
			{
				cout << counter1;
				counter1 = counter1 + 1;
			}
			counter1 = counter1 - 2;
			while (counter1>=1)
			{
				cout << counter1;
				counter1 = counter1 - 1;
			}
		}
		cout << "\n";
		counter = counter + 1;
	}
	counter = counter - 2;
	while (counter >= 1)
	{
		counter1 = 1;
		if (counter1 == 1)
		{
			while (counter1 <= counter)
			{
				cout << counter1;
				counter1 = counter1 + 1;
			}
			counter1 = counter1 - 2;
			while (counter1 >= 1)
			{
				cout << counter1;
				counter1 = counter1 - 1;
			}
		}
		cout << "\n";
		counter = counter - 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}