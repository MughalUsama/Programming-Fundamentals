#include <iostream>
using namespace std;

void getInputs(int[]);
void displayWrongAnswers(int[]);
int countCorrectAnswers(int[], int[]);


int main()
{
	int correctAnswers[20] = { 66, 68, 65, 65, 67, 65, 66, 65, 67, 68, 66, 67, 68, 65, 68, 67, 67, 66, 68, 65 };
	int userAnswers[20] , noOfCorrectAnswers;
	getInputs(userAnswers);
	noOfCorrectAnswers=	countCorrectAnswers(userAnswers, correctAnswers);
	cout << "\n There are " << noOfCorrectAnswers << " correct answers and " << 20 - noOfCorrectAnswers << " wrong answers. ";
	if (noOfCorrectAnswers!=20)
	{
		displayWrongAnswers(userAnswers);
	}
	else
	{
		cout << "\n\t\t\"All answers are correct\"";
	}
	cout << "\n";
	system("pause");
	return 0;
}

void getInputs(int userAnswers[])
{
	for (int i = 0; i < 20; i=i+1)
	{
		char answer;
		cout << " Enter the answer for M.C.Q's no " << i + 1<<" : ";
		cin >> answer;
		userAnswers[i] = answer;
	}
}
int countCorrectAnswers(int userAnswers[], int correctAnswers[])
{
	int count = 0;
	for (int i = 0; i < 20; i=i+1)
	{
		if (userAnswers[i]==correctAnswers[i])
		{
			count = count + 1;
		}
		else
		{
			userAnswers[i] = 0;
		}
	}
	return count;
}
void displayWrongAnswers(int userAnswers[])
{
	cout << "\n\t\tWRONG ANSWERS:";
	for (int i = 0; i < 20; i=i+1)
	{
		if (userAnswers[i]==0)
		{
			cout << "\nQuestion no " << i+1;
		}

	}
}