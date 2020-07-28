#include <iostream>
using namespace std;
int main()
{
	int number, prevDigit, currentDigit, repeatCount1=1, repeatCount2=0, repeatDigit;
	cout << "Enter the number: ";
	cin >> number;
	prevDigit = number % 10;
	number = number / 10;
	repeatDigit = prevDigit;

	while (number > 0 )
	{
		currentDigit = number % 10;
		number = number / 10;

		if (prevDigit == currentDigit)
		{
			repeatCount1 = repeatCount1 + 1;
			repeatCount2 = repeatCount1;
		
		}

		if (prevDigit != currentDigit)
		{
			repeatCount2 = repeatCount2-1;
			if (repeatCount2<repeatCount1)
			{
				repeatCount2 = repeatCount1;
				repeatDigit = prevDigit;
				

			}

			if (repeatCount1==repeatCount2)
			{

				if (currentDigit>prevDigit)
				{
					repeatCount2 = repeatCount1;
					repeatDigit = currentDigit;
				}
				else
				{
					repeatDigit = prevDigit;
				}

			}

			repeatCount1 = 1;
	
		}
		prevDigit = currentDigit;
	}

	cout << "\nNumber is " << repeatDigit;

	cout << "\n";
	system("pause");
	return 0;
}