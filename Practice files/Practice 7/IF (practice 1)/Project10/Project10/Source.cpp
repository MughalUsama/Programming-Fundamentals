#include <iostream>
using namespace std;
int main()
{
	float cgpa;
	cout << "Enter CGPA: ";
	cin >> cgpa;
	if (cgpa < 1.7)
	{
		cout << "Dropped";
	}
	else if (cgpa >=1.7 && cgpa<2)
	{
		cout << "On Probation";
	}
	else
	{
		cout << "Safe";
	}
	cout << "\n";
	system("pause");
	return 0;
}