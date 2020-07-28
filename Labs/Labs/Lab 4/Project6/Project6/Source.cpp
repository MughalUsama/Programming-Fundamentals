#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int num1, num2;
	char enter[1];
	srand(time(0));
	num1 = rand() % 100000;
	num2 = rand() % 100000;
	cout << "*****Kangaroo Math Competition*****\n";
	cout << "    \t" << num1 << "\n";
	cout << "   +\t" << num2 << "\n";
	cout << "  -------------"<<"\n";
	cout << "Hey Kido! When you solve it in your mind => Press Enter key to verify your answer:\n";
	cin.get(enter,1);
	cout << "    \t" << num1 << "\n";
	cout << "   +\t" << num2 << "\n";
	cout << "  -------------" << "\n";
	cout << "    \t" << num1 + num2 << "\n";
	system("pause");
	return 0;
}