#include <iostream>
using namespace std;
int main()
{
	int num = 87654;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int digit5;
	digit5 = num % 10;
	num = num / 10;
	digit4 = num % 10;
	num = num / 10;
	digit3 = num % 10;
	num = num / 10;
	digit2 = num % 10;
	num = num / 10;
	digit1 = num % 10;
	cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << "\n";

	cout << "\n";
	system("pause");
	return 0;
}