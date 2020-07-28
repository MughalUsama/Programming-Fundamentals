#include <iostream>

using namespace std;
int main()
{
	int height, noOfRows=1, counter, num;
	cout << "Enter height of triangle: ";
	cin >> height;
	num = height;

	while (noOfRows<=height)
	{
		counter = 1;
		while (counter <= num)
		{
			cout << num;
			counter = counter + 1;
		}
		cout << "\n";
		num = num - 1;
		noOfRows = noOfRows + 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}