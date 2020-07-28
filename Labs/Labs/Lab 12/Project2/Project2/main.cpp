#include <iostream>
#include "CipherApp.h"
using namespace std;

int main()
{
	char string1[30] = "The Internet never retreats" , key[20]="rose";
	char cipherArray[30];
	cipherText(key, string1, cipherArray);
	cout<< cipherArray;

	cout << "\n";
	system("pause");
	return 0;
}