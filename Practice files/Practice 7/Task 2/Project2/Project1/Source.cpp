#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2, answer;
	char enter[1];
	srand(time(0));
	num1 = 1+rand() % 99999;
	num2 = 1+rand() % 99999;
	cout << "*****Kangaroo Math Competition*****\n";
	cout.fill('0');
	cout << "    "<<"\t" << setw(5) << num1 << "\n";
	cout << "   +"<<"\t" << setw(5) << num2 << "\n";
	cout << "  -------------" << "\n";
	cout << "Hey Kido! Enter your answer: ";
	cin >> answer;
	if (answer!=(num1+num2))
	{
		cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
	}
	else
	{
		cout << "Well done Kido! Your answer is correct./n";
	}
	cin.get(enter, 1);
	cout << "    \t" << setw(5) << num1 << "\n";
	cout << "   +\t" << setw(5) << num2 << "\n";
	cout << "  -------------" << "\n";
	cout << "    \t" << num1 + num2 << "\n";
	cout << "\n";
	system("pause");
	return 0;
}