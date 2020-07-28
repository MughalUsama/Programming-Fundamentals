#include <iostream>
using namespace std;

int addInArray(int[], int, int);
int main()
{
	int array[100000];
	int noOfValues, noOftestCases, greatestValue;
	cin >> noOftestCases;
	for (int i = 1; i <= noOftestCases; i = i + 1)
	{

		cin >> noOfValues >> greatestValue;

		for (int i = 0; i < noOfValues; i = i + 1)
		{
			cin >> array[i];
		}
		cout << addInArray(array, noOfValues, greatestValue)<< "\n ";

	}
	system("pause");
	return 0;
}

int addInArray(int array[], int noOfValues, int greatestValue)
{
	int noOfSeconds = 0;
	bool arrayLarger = false;
	while (!arrayLarger)
	{
		int i = 0;
		bool arraySmaller = false;
		while (i<noOfValues && !arraySmaller)
		{
			if ((array[i]+ noOfSeconds) < greatestValue)
			{
				arraySmaller=true;
			}
			i = i + 1;
		}
		if (!arraySmaller)
		{
			return noOfSeconds;
		}
		
		noOfSeconds = noOfSeconds + 1;
	}


}