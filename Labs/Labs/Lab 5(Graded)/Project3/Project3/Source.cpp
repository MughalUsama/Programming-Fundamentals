#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2, operatorDecider, sign1Decider, sign2Decider;

	srand(time(0));
	num1 = 1 + rand() % 999;
	num2 = 1 + rand() % 999;
	operatorDecider = 1 + rand() % 5;
	sign1Decider = rand() % 2;
	sign2Decider = rand() % 2;
	//sign decider
	if (sign1Decider == 1)
	{
		num1 = (-1 * num1);
	}
	if (sign2Decider == 1)
	{
		num2 = (-1 * num2);
	}

	//operation
	if (operatorDecider == 1)
	{
		if (sign1Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num1) << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num1 << "\n";
		}
		if (sign2Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num2) << "  ADD" << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num2 << "  ADD" << "\n";
		}
		cout << "\t-----------\n";
		if (num1 + num2 < 0)
		{
			cout << "\t- "<< setw(4) << -1 * (num1 + num2);
		}
		else
		{
			cout << "\t+ " << setw(4) << (num1 + num2);
		}

	}


	else if (operatorDecider == 2)
	{
		if (sign1Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num1) << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num1 << "\n";
		}
		if (sign2Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num2) << "  SUB" << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num2 << "  SUB" << "\n";
		}
		cout << "\t-----------\n";
		if (num1 - num2 < 0)
		{
			cout << "\t- "<<setw(4) << -1 * (num1 - num2);
		}
		else
		{
			cout << "\t+  " << (num1 - num2);
		}
	}


	else if (operatorDecider == 3)
	{
		if (sign1Decider == 1)
		{
			cout << "\t-    " << setw(3) << (-1 * num1) << "\n";
		}
		else
		{
			cout << "\t+    " << setw(3) << num1 << "\n";
		}
		if (sign2Decider == 1)
		{
			cout << "\t-    " << setw(3) << (-1 * num2) << "  MOD" << "\n";
		}
		else
		{
			cout << "\t+    " << setw(3) << num2 << "  MOD" << "\n";
		}
		cout << "\t-----------\n";
		if (num1 % num2 < 0)
		{
			cout << "\t-    "<< setw(3) << -1 * (num1 % num2);
		}
		else
		{
			cout << "\t+    "<<setw(3) << (num1 % num2);
		}
	}


	else if (operatorDecider == 4)
	{
		if (sign1Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num1) << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num1 << "\n";
		}
		if (sign2Decider == 1)
		{
			cout << "\t-  " << setw(3) << (-1 * num2) << "  DIV" << "\n";
		}
		else
		{
			cout << "\t+  " << setw(3) << num2 << "  DIV" << "\n";
		}
		cout << "\t-----------\n";
		if (num1 / num2 < 0)
		{
			cout << "\t-  " << setw(3) << -1 * (num1 / num2);
		}
		else
		{
			cout << "\t+  " << setw(3) << (num1 / num2);
		}

	}
	else if (operatorDecider == 5)
	{
		if (sign1Decider == 1)
		{
			cout << "\t-    " << setw(3) << (-1 * num1) << "\n";
		}
		else
		{
			cout << "\t+    " << setw(3) << num1 << "\n";
		}
		if (sign2Decider == 1)
		{
			cout << "\t-    " << setw(3) << (-1 * num2) << "  MUL" << "\n";
		}
		else
		{
			cout << "\t+    " << setw(3) << num2 << "  MUL" << "\n";
		}
		cout << "\t-----------\n";
		if (num1 * num2 < 0)
		{
			cout << "\t-" << setw(7) << -1 * (num1 * num2);
		}
		else
		{
			cout << "\t+" << setw(7) << (num1 * num2);
		}
	}


	cout << "\n";
	system("pause");
	return 0;

}