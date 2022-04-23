#include <bits/stdc++.h>
using namespace std;

void FindPoints(int x1, int y1, int x2, int y2,
                int x3, int y3, int x4, int y4)
{

    int x5 = max(x1, x3);
    int y5 = max(y1, y3);

    int x6 = min(x2, x4);
    int y6 = min(y2, y4);

    // no intersection
    if (x5 > x6 || y5 > y6) {
        cout << "No intersection";
        return;
    }

    cout << "(" << x5 << ", " << y5 << ") ";

    cout << "(" << x6 << ", " << y6 << ") ";

    int x7 = x5;
    int y7 = y6;

    cout << "(" << x7 << ", " << y7 << ") ";

    int x8 = x6;
    int y8 = y5;

    cout << "(" << x8 << ", " << y8 << ") ";
}

// Driver code
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "\nEnter x2 and y2: ";
    cin >> x2 >> y2;
//------------------------------------------
    int x3, y3, x4, y4;
    cout << "\nEnter x3 and y3: ";
    cin >> x3 >> y3;
    cout << "\nEnter x4 and y4: ";
    cin >> x4 >> y4;

    // function call
    FindPoints(x1, y1, x2, y2, x3, y3, x4, y4);

    return 0;
}
