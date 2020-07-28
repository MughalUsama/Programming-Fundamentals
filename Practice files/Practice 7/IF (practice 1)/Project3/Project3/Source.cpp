#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the negative no: ";
	cin >> num;
	if (num>=0)
	{
		cout << "Absolute value is "<< num;

	}
	else
	{
		cout << "Absolute value is " << -1*num;
	}
	cout << "\n";
	system("pause");
	return 0;
}