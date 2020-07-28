#include <iostream>
using namespace std;
int main()
{
	char name[30], age[5], city[20], college[40], profession[20], petName[20], animal[20];
	cout << "Enter your name: ";
	cin.getline(name,30);
	cout << "Enter your age: ";
	cin.getline(age, 4);
	cout << "Enter your city name: ";
	cin.getline(city, 20);
	cout << "Enter your college name: ";
	cin.getline(college, 40);
	cout << "Enter your profession: ";
	cin.getline(profession, 20);
	cout << "Enter your pet name: ";
	cin.getline(petName, 20);
	cout << "Which type of animal is your pet: ";
	cin.getline(animal, 20);
	cout << "There once was a person named " << name << " who lived in " << city << ".At the age of " << age << "," << name << " went to college at " << college << ".\n" << name << " graduated from " << college << " and went to work as a " << profession << ".Then, " << name << " adopted"<<"\n a(n) " << animal << " named " << petName << ".They both lived happily ever after!";
	cout << "\n";
	system("pause");
	return 0;
}