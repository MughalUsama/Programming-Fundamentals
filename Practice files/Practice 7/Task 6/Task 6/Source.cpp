#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2, operationDecider, answer, signNum1, signNum2, negNum1, negNum2;
	srand(time(0));
	num1 = 1 + rand() % 999;
	num2 = 1 + rand() % 999;
	operationDecider = 1 + rand() % 5;
	signNum1 = 1 + rand() % 2;
	signNum2 = 1 + rand() % 2;


	if (signNum1 == 1)
	{
		num1 = num1 * -1;
	}
	if (signNum2 == 1)
	{
		num2 = num2 * -1;

	}
	if (operationDecider == 1)
	{
		cout.fill('0');
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tADD" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tADD" << "\n";
		}

		cout << "  -------------" << "\n";
		cout << "Hey Kido! Enter your answer: ";
		cin >> answer;
		if (answer != (num1 + num2))
		{
			cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
		}
		else
		{
			cout << "Well done Kido! Your answer is correct./n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tADD" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tADD" << "\n";
		}

		cout << "  -------------" << "\n";

		cout << "       " << setw(4) << (num1 + num2) << "\n";
	}
	//number subtraction
	
	else if (operationDecider == 2)
	{
		cout.fill('0');
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tSUB" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tSUB" << "\n";
		}

		cout << "  -------------" << "\n";
		cout << "Hey Kido! Enter your answer: ";
		cin >> answer;
		if (answer != (num1 - num2))
		{
			cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
		}
		else
		{
			cout << "Well done Kido! Your answer is correct.\n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tSUB" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tSUB" << "\n";
		}

		cout << "  -------------" << "\n";

		cout << "       " << setw(4) << (num1 - num2) << "\n";
	}

	//modulus
	else if (operationDecider == 3)
	{
		cout.fill('0');
		if (signNum2== 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\tMOD" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\tMOD" << "\n";
		}

		cout << "  -------------" << "\n";
		cout << "Hey Kido! Enter your answer: ";
		cin >> answer;
		if (answer != (num2%num1))
		{
			cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
		}
		else
		{
			cout << "Well done Kido! Your answer is correct.\n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tMOD" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tMOD" << "\n";
		}

		cout << "  -------------" << "\n";

		cout << "       " << setw(4) << (num2%num1) << "\n";
	}
	//MULTIPLICATION
	else if (operationDecider == 4)
	{
		cout.fill('0');
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tMULT" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tMULT" << "\n";
		}

		cout << "  -------------" << "\n";
		cout << "Hey Kido! Enter your answer: ";
		cin >> answer;
		if (answer != (num1*num2))
		{
			cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
		}
		else
		{
			cout << "Well done Kido! Your answer is correct.\n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tMULT" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tMULT" << "\n";
		}

		cout << "  -------------" << "\n";
		cout.fill(' ');
		cout << "     " << (num1*num2) << "\n";
	}

	// DIVISION
	else if (operationDecider == 5)
	{
		cout.fill('0');
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tDIV" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tDIV" << "\n";
		}

		cout << "  -------------" << "\n";
		cout << "Hey Kido! Enter your answer: ";
		cin >> answer;
		if (answer != (num1/num2))
		{
			cout << "OOps Kido! Your answer is incorrect. Keep doing the hard work. You will crack it one day.\n";
		}
		else
		{
			cout << "Well done Kido! Your answer is correct.\n";
		}
		if (signNum1 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num1 << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num1 << "\n";
		}
		if (signNum2 == 1)
		{
			cout << "   -" << "\t" << setw(3) << -1 * num2 << "\tDIV" << "\n";
		}
		else
		{
			cout << "   +" << "\t" << setw(3) << num2 << "\tDIV" << "\n";
		}

		cout << "  -------------" << "\n";
		
		cout << "       "  << (num1/num2) << "\n";
	}


		cout << "\n";
		system("pause");
		return 0;
	
}