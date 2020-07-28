#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the first no:";
	cin >> num1;
	cout << "Enter the second no:";
	cin >> num2;
	if (num1%num2==0)
	{
		cout << "Number is DIVISIBLE";
	}
	else
	{
		cout << "Number is INDIVISIBLE";
	}
	cout << "\n";
	system("pause");
	return 0;
}