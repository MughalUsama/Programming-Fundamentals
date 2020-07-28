#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	if (age>55)
	{
		cout << "$10.00";
	}
	else if (age>=21 && age <=54)
	{
		cout << "$15.00";
	}
	else if (age>=13 && age <=20)
	{
		cout << "$10.00";
	}
	else if (age>=3 && age<=12)
	{
		cout << "$5.00";
	}
	else if (age<3)
	{
		cout << "Free";
	}
	cout << "\n";
	system("pause");
	return 0;
}