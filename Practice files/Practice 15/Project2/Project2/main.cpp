#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char name[30] = "Usama",
		lastName[30] = " Shahid";

	concatenate(name, lastName);
	cout << name;
	cout << "\n";
	system("pause");
	return 0;
}
