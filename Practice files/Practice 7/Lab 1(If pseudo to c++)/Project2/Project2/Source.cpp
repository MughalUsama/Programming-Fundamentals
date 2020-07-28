#include <iostream>
using namespace std;
int main()
{
	/*width of side and depth of shelve is same i.e 12.
	so we can use 12 inch board and only need to know width of shelf and length of sides.*/
	float heightOfShelf, widthOfShelf, totalSidesLength, totalShelvesWidth, boardLength;
	cout << "Enter the height of shelf: ";
	cin >> heightOfShelf;
	cout << "Enter the width of shelf: ";
	cin >> widthOfShelf;
	/* calculating length of both sides. As each side has five shelves(3 + top+bottom) and four in between areas, so 
	we will multiply it with height. since width of side(depth of shelve) is same 12 inch.*/
	totalSidesLength = 8 * heightOfShelf;
	// as it has 5 shelves including top and bottom with depth(length) 12 inch. so we will find total width of shelves
	totalShelvesWidth = 5 * widthOfShelf;
	//total and into feet
	boardLength = (totalShelvesWidth + totalSidesLength)/12;
	cout << "Total 2-inch wide board needed should be " << boardLength << " feet.";
	cout << "\n";
	system("pause");
	return 0;
}