#include <iostream>
using namespace std;
int main()
{
	int startRangeOne, startRangeTwo, endRangeOne, endRangetwo, counter, rangeReset;
	counter = 0;

	cout << "Enter the start of first range: ";
	cin >> startRangeOne;
	cout << "Enter the end of first range: ";
	cin >> endRangeOne;
	cout << "Enter the start of second range: ";
	cin >> startRangeTwo;
	cout << "Enter the end of second range: ";
	cin >> endRangetwo;
	rangeReset = startRangeTwo;

	while (startRangeOne<endRangeOne || startRangeOne==endRangeOne)
	{
		if (startRangeOne == startRangeTwo)
		{
			counter = counter + 1;
		}
		startRangeTwo = startRangeTwo + 1;
		if (startRangeTwo==endRangetwo)
		{
			startRangeOne = startRangeOne + 1;
			startRangeTwo = rangeReset;
		}

	}
	if (counter>=3)
	{
		cout << "Overlapping.";
	}
	else
	{
		cout << "Not overlapping.";
	}
	cout << "\n";
	system("pause");
	return 0;
}