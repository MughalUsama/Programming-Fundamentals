#include <iostream>
#include "MyString.h";
using namespace std;


int main()
{
	char searchDestination[50] = "Islamabad is the capital of Pakistan.";
	char key = 'I';
	int index = findSubString(searchDestination, key);
	
	index == -1? cout << "Character Not Found.": cout << "The index of Character is " << index;
	
	cout << "\n";
	system("pause");
	return 0;
}
