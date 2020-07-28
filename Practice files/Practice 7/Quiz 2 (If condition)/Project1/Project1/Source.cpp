#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << "Enter a single letter: ";
	cin >> letter;
	if (letter == 'A' || letter == 'B' || letter == 'C')
	{
		cout << "You pressed 2 on dialling pad.";
	}
	else if (letter == 'D' || letter == 'E' || letter == 'F')
	{
		cout << "You pressed 3 on dialling pad.";
	}
	else if (letter == 'G' || letter == 'H' || letter == 'I')
	{
		cout << "You pressed 4 on dialling pad.";
	}
	else if (letter == 'J' || letter == 'K' || letter == 'L')
	{
		cout << "You pressed 5 on dialling pad.";
	}
	else if (letter == 'M' || letter == 'N' || letter == 'O')
	{
		cout << "You pressed 6 on dialling pad.";
	}
	else if (letter == 'P' || letter == 'R' || letter == 'S')
	{
		cout << "You pressed 7 on dialling pad.";
	}
	else if (letter == 'T' || letter == 'U' || letter == 'V')
	{
		cout << "You pressed 8 on dialling pad.";
	}
	else if (letter == 'W' || letter == 'X' || letter == 'Y')
	{
		cout << "You pressed 9 on dialling pad.";
	}
	else if (letter == 'Q' || letter == 'Z')
	{
		cout << "NOT A PART OF DIALLING PAD.";
	}







		cout << "\n";
	system("pause");
	return 0;
}