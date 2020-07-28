#include <iostream>
using namespace std;
int main()
{
	int num1, num2, counter, noOfTerm, number;
	counter = 1;
	num1 = 0;
	num2 = 1;
	
	cout << "Enter number of term to display: ";
	cin >> noOfTerm;
	
	while (counter<=noOfTerm)
	{
		number = num1;
		num1 = num2;
		num2 = number+num1;

		counter = counter + 1;
	}
	cout << "The " << noOfTerm << " term is : " << number;
	cout << "\n";
	system("pause");
	return 0;
}