#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int height, noOfRows = 1, counter, heightReset, num, noPerLine;
	cout << "Enter height of triangle: ";
	cin >> height;
	heightReset = height;
	
	num = 1;
	
	height = heightReset;
	noPerLine = height;
	while (noOfRows <= height)
	{
		counter = 1;
		while (counter <= noPerLine)
		{
			cout << left << setw(3) <<num;
			counter = counter + 1;
			num = num + 1;
		}

		cout << "\n";
		noPerLine = noPerLine - 1;
		noOfRows = noOfRows + 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}