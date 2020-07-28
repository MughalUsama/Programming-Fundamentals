#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int height, noOfRows = 1, counter, length;
	cout << "Enter height of triangle: ";
	cin >> height;

	while (noOfRows <= height)
	{
		counter = 1;
		while (counter <= height)
		{
			while (counter <= (height- noOfRows))
			{
				cout << "_";
				counter = counter + 1;
			}
			cout << "*";
			counter = counter + 1;
		}
		cout << "\n";
		
		noOfRows = noOfRows + 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}