#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
	int caseDecider;
	char alphabet;
	srand(time(0));
	caseDecider = rand() % 2;
	switch (caseDecider)
	{
	case 0:
		alphabet = 65 + (rand() % 26);
		break;
	case 1:
		alphabet = 97 + (rand() % 26);
		break;
	}
	cout << "\n\t\t Alphabet : " << alphabet;
	cout << "\n\n";
	system("pause");
	return 0;

}