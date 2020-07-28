#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char destination[70] = "Program to remove leading and trailing spaces.  ";
	trim(destination);  
	cout << destination<<"Spaces are removed";


	cout << "\n";
	system("pause");
	return 0;
}
