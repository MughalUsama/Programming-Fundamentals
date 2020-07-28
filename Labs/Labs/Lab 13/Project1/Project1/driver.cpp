#include <iostream>
#include "StringTokenizer.h"
using namespace std;

int main()
{

	char str[30] = "This, a sample string";
	char * token = stringTokenizer(str, ". ,");
	cout << "String after token: \n\t\""<<str<<"\"\n\n";
	cout << "Token :\n\t\"" << token << "\"";
	
	token = stringTokenizer(str, ".");
	cout << "\n\nString after token: \n\t\"" << str << "\"\n\n";
	cout << "Token :\n\t\""<<token<<"\"";

	token = stringTokenizer(str, ".");
	cout << "\n\nString after token: \n\t\"" << str << "\"\n\n";
	cout << "Token :\n\t\"" << token << "\"";
	
	token = stringTokenizer(str, ".");
	cout << "\n\nString after token: \n\t\"" << str << "\"\n\n";
	cout << "Token :\n\t\"" << token << "\"";

	token = stringTokenizer(str, ".");
	cout << "\n\nString after token: \n\t\"" << str << "\"\n\n";
	cout << "Token :\n\t\"" << token << "\"";
	

	cout << "\n";
	system("pause");
	return 0;
}