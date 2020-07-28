#include <iostream>
#include "FindTreasureApp.h"
using namespace std;

int main()
{
	int maze[5][5] = { {34,21,32,41,25}, {14,42,43,14,31}, {54,45,52,42,23}, {33,15,51,31,35}, {21,55,33,13,55} };
	findTreasure(maze ,5 ,5);
	cin.ignore();
	cin.get();
	return 0;
}

