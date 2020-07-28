#include <iostream>
using namespace std;
int main()
{
	char ch;
	int ascii;
	cout << "Enter the alphabet in small caps: ";
	cin >> ch;
	ch = ch - 32;
	cout << "Alpabet in large caps is: " << ch;
	cout << "\n";
	system("pause");
	return 0;
}