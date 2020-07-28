#include <iostream>
using namespace std;
int main()
{
	int lines, center1, center2, center;
	cout << "Enter no of lines:";
	cin >> lines;
	center = (lines / 2) + 1;
	center1 = center;
	center2 = center;
	for (int i = 1; i <= lines/2+1; i=i+1)
	{
		cout << "\n";
		for (int j = 1; j < lines+2; j=j+1)
		{

			if (i==1)
			{
				if (j==(center))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{

				if (center1== j || center2==j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

		}
		center1 = center1 - 1;
		center2 = center2 + 1;
		
	}
	

	center1 = center1 + 2;
	center2 = center2 - 2;

	for (int k=lines/2; k >= 1; k=k-1)
	{
		cout << "\n";
		for (int i = 1; i <= lines; i = i + 1)
		{
			if (k == 1)
			{
				if (i==center)
				{
					cout << "*";
				}
				
					cout << " ";
			}
			else
			{

				if (center1 == i || center2 == i)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				
			}
			
		}
		center1 = center1 + 1;
		center2 = center2 - 1;
		
	}


	cout << "\n";
	system("pause");
	return 0;
}