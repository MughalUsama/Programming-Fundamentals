#include <iostream>
using namespace std;
int main()
{
	int height, counter, counter1, num;
	cout << "Enter the height: ";
	cin >> height;
	counter = 1;
	counter1 = 1;
	num = counter;
	while (counter <= height)
	{
		
		while (counter1 >= 1)
		{
			cout << counter1;
			counter1 = counter1 - 1;
		}

		counter1 = counter1 + 1;
		while (counter1 <= num)
		{
			cout << counter1;
			counter1 = counter1 + 1;
		}
		cout << "\n";
		num = num + 1;
		counter = counter + 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}