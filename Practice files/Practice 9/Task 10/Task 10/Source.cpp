#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int height, lineNumber, num, counter1, noOfRows;
	cout << "Enter the height of the square: ";
	cin >> height;
	lineNumber = 1;
	counter1 = 1;
	num = height;
	while (lineNumber <=height)
	{
		counter1 = 1;
		while (counter1 <= height)
		{
			
			if (counter1 == num)
			{
				cout << setw(2)<< lineNumber;
			}
			else
			{
				cout << setw(2) << ".";
			}
			counter1 = counter1 + 1;
		}
		cout<<"\n";
		
		num = num - 1;
		lineNumber = lineNumber + 1;

	}
	cout << "\n";
	system("pause");
	return 0;
}