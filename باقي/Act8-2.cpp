#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float x1, y1, x2, y2, I;
	cout << "Input x1: ";
	cin >> x1;
	cout << "Input y1: ";
	cin >> y1;

    cout << "Input x2: ";
	cin >> x2;
	cout << "Input y2: ";
	cin >> y2;

	I = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	cout << "Distance between the said points: " << sqrt(I) ;
	cout << "\n";
	return 0;
}
