#include <iostream>
using namespace std;
int main()
{
	float marks;
	cout << "Enter the marks: ";
	cin >> marks;
	if (marks>80)
	{
		cout << "GOOD LUCK";
	}
	else
	{
		cout << "BETTER LUCK NEXT TIME";
	}
	cout << "\n";
	system("pause");
	return 0;
}