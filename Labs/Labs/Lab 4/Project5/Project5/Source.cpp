#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int totalDegrees, degree1, degree2, totalMinutes, minutes1, minutes2, totalSeconds, seconds1, seconds2;
	cout << "Enter Degrees: ";
	cin >> degree1;
	cout << "Enter Minutes: ";
	cin >> minutes1;
	cout << "Enter Seconds: ";
	cin >> seconds1;
	cout << "Enter Degrees: ";
	cin >> degree2;
	cout << "Enter Minutes: ";
	cin >> minutes2;
	cout << "Enter Seconds: ";
	cin >> seconds2;
	totalSeconds = seconds1 + seconds2;
	//calculating minutes from seconds above or equal to 60
	totalMinutes = totalSeconds / 60;
	//calculating seconds by neglecting seonds over or equal to 60 as they are saved in totalMinutes
	totalSeconds = totalSeconds % 60;
	//calculating total minutes from entered minutes and minutes obtained  from seconds
	totalMinutes = totalMinutes + minutes1 + minutes2;
	//calculating degrees from minutes above or equal to 60
	totalDegrees = totalMinutes / 60;
	//calculating minutes by neglecting minutes over or equal to 60 as they are saved in totalDegrees
	totalMinutes = totalMinutes % 60;
	//calculating total degrees from entered degrees and degrees obtained from minutes
	totalDegrees = totalDegrees + degree1 + degree2;
	cout << degree1 << "`\t" << minutes1 << "\'\t" << seconds1 << "\"\n";
	cout << degree2 << "`\t" << minutes2 << "\'\t" << seconds2 << "\"\n";
	cout << "-------------------\n";
	cout << totalDegrees << "`\t" << totalMinutes << "\'\t" << totalSeconds << "\"\t";
	cout << "\n";
	system("pause");
	return 0;

}