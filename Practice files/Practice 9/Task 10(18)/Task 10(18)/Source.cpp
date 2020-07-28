#include <iostream>
using namespace std;
int main()
{
	int totalLines, i;
	cout << "Enter total lines : ";
	cin >> totalLines;
	for (i = 1; i <= totalLines; i=i+1)
	{
		if (i==totalLines || i==1)
		{
			for (int j = 1; j <= totalLines; j=j+1)
			{
				cout << "* ";
			
			}
			

		}
		else
		{
			for (int j = 1; j <= totalLines; j = j + 1)
			{
				if (j == 1 || j == totalLines)
				{
					cout << "* ";
				
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << "\n";

	}

	cout << "\n";
	system("pause");
	return 0;
}