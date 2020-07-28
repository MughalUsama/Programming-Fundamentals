#include <iostream>
using namespace std;
int main()
{
	int height, counter1 = 1, counter2, counter3;
	cout << "Enter the height:";
	cin >> height;

	while (counter1 <= height)
	{
		counter2 = 1;
		counter3 = 0;
		while (counter2<counter1)
		{
			cout << " ";
			counter3 = counter3 + 1;
			counter2 = counter2 + 1;
		}
		while (counter2 < ((2*height)-counter3))
		{
			cout << counter2;
			counter2 = counter2 + 1;
		}
		cout << "\n";
		counter1 = counter1 + 1;
	}
	cout << "\n";
	system("pause");
	return 0;
}