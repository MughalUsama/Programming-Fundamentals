#include <iostream>
#include <cmath>
using namespace std;

void displayParametrsOfCircle(float, float, float, float);
double calculateDistance(float x1, float y1, float x2, float y2);
double calculateRadius(float x1, float y1, float x2, float y2);
double calculateCircumference(double radius);
double calculateArea(double radius);



int main()
{
	int xOfCenter, yOfCenter, xOfPoint, yOfPoint;
	cout << "Enter x co-ordinate of centre: ";
	cin >> xOfCenter;
	cout << "Enter y co-ordinate of centre: ";
	cin >> yOfCenter;
	cout << "Enter x co-ordinate of point P: ";
	cin >> xOfPoint;
	cout << "Enter y co-ordinate of point P: ";
	cin >> yOfPoint;

	displayParametrsOfCircle(xOfCenter, yOfCenter, xOfPoint, yOfPoint);

	cout << "\n";
	cin.ignore();
	cin.get();
}

void displayParametrsOfCircle(float x1, float y1, float x2, float y2)
{
	double distance = calculateDistance(x1, x2, y1, y2);
	double radius = calculateRadius(x1, x2, y1, y2);

	cout << " Distance between points: " << distance;
	cout << "\n Radius of circle: " << radius;
	cout << "\n Circumference of circle: " << calculateCircumference(radius);
	cout << "\n Area of circle: " << calculateArea(radius);
}

double calculateDistance(float x1, float y1, float x2, float y2)
{
	double distance;

	distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	return distance;
}

double calculateRadius(float x1, float y1, float x2, float y2)
{
	double radius;

	radius = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return radius;
}

double calculateCircumference(double radius)
{

	double circumference = 2 * 3.1416 * radius;
	return circumference;

}

double calculateArea(double radius)
{
	double area = 3.1416 * radius * radius;
	return area;
}