#include <iostream>
using namespace std;
int main()
{
	int elapsedTime, hours, minutes, seconds, remainingSeconds;
	elapsedTime = 9630;
	hours = elapsedTime / 3600;
	remainingSeconds = elapsedTime % 3600;
	minutes = remainingSeconds / 60;
	remainingSeconds = remainingSeconds % 60;
	
	cout <<"Time in Hours:Minutes:Seconds = "<< hours << ":" << minutes << ":" << remainingSeconds;
	cout << "\n";
	system("pause");
	return 0;
}