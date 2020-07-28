#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int timesToFlip, head, tail, counter, flip;
	cout << "How many times coin should flip: ";
	cin >> timesToFlip;
	counter = 1;
	head = 0;
	tail = 0;
	while (counter<=timesToFlip)
	{
		srand(time(0));
		flip=rand()%2;
		if (flip==1)
		{
			head = head + 1;
		}
		else if (flip==0)
		{
			tail = tail + 1;
		}
		counter = counter + 1;
	}
	cout << "Number of HEADS: " << head<<"\n";
	cout << "Number of TAILS: " << tail;
	cout << "\n";
	system("pause");
	return 0;
}