#include <iostream>
using namespace std;
int main()
{
	int num1, num2, addition;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	addition = num1 + num2;
	
	if (num1>0 && num2>0 && addition<0)
	{
		cout << "Overflow has occured.\n";
	}
	else if(num1<0 && num2<0 && addition>=0)
	{
			cout << "Underflow has occured.\n";
		
	
	}
	cout << "Addition = " << addition;
	

	cout << "\n";
	system("pause");
	return 0;

}