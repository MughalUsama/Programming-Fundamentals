#include <iostream>
using namespace std;
int main()
{
	int reams, reportLength, noOfSheets, noOfPeople;
	cout << "Enter the no of people: ";
	cin >> noOfPeople;
	cout << "Enter the report length: ";
	cin >> reportLength;
	noOfSheets = reportLength * (noOfPeople + 5);
	reams = noOfSheets / 500;
	if (reams==0)
	{
		cout << "Number of reams needed are " << 1;
	}
	else
	{
		cout << "Number of reams needed are " << reams;

	}
		cout << "\n";
	system("pause");
	return 0;
}