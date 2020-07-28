#include <iostream>
using namespace std;
int main()
{
	int age;
	char name[50];
	cin >> age;
	cin.getline(name, 50);
	cout << age << " " << name;
	cout << "\n";
	system("pause");
	return 0;
}