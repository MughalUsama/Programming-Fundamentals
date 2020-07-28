#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter AGE : ";
	cin >> age;
	if (age>=18)
	{
		cout << "Eligible";

	}
	else
	{
		cout << "No Eligible";
	}
	cout << "\n";
	system("pause");
	return 0;
}