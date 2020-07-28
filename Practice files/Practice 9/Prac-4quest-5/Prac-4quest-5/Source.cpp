#include <iostream>
using namespace std;
int main()
{
	int noOfTerms, counter2, exponent, sum, counter, term1, term2, power, exponent1, exponent2, exponent3;
	sum = 1;
	counter = 1;
	term1 = 1;
	term2 = 1;

	cout << "Enter no of terms to be added: ";
	cin >> noOfTerms;
	cout << "Enter the value of 'S': ";
	cin >> exponent;
	counter2 = 0;
	power = exponent + 1;
	exponent1 = 1;
	exponent2 = 1;
	while (counter < noOfTerms)
	{

		if (counter % 2 == 1)
		{
			while (counter2 < (power))
			{
				term1 = term1 * 2;
				counter2 = counter2 + 1;
			}
			sum = sum + term1;
			counter2 = 0;
		}
		else if(counter % 2 == 0)
		{
			while (counter2 < (power))
			{
				term2 = term2 * 3;
				counter2 = counter2 + 1;

			}
			counter2 = 0;
			sum = sum + term2;
			
		}
		
		power = exponent + exponent1 + exponent2;
		exponent3 = exponent1 + exponent2;
		exponent1 = exponent2;
		exponent2 = exponent3;

		counter = counter + 1;
	}
	cout << "Sum is : " << sum;
	cout << "\n";
	system("pause");
	return 0;
}