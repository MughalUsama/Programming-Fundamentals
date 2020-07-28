#include <iostream>
using namespace std;
int main()
{
	int firstNo, secondNo, thirdNo;
	cout << "Enter first no: ";
	cin >> firstNo;
	cout << "Enter second no: ";
	cin >> secondNo;
	cout << "Enter third no: ";
	cin >> thirdNo;
	if (firstNo == secondNo && secondNo == thirdNo)
	{
		cout << "All are same.";
	}
	else if (firstNo!=secondNo && secondNo!=thirdNo && firstNo!=thirdNo)
	{
		cout << "All are different.";
	}
	else if (firstNo==secondNo)
	{
		cout << "Exactly 2 are same.";
	}
	else if (firstNo == thirdNo)
	{
		cout << "Exactly 2 are same.";
	}
	else if (thirdNo == secondNo)
	{
		cout << "Exactly 2 are same.";
	}
	cout << "\n";
	system("pause");
	return 0;
}