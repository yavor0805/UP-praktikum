#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << " vuvedete X i Y: " << endl;
    cin >> x;
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << " First";
    }
    if (x < 0 && y > 0)
    {
        cout << " Second";
    }
    if (x < 0 && y < 0)
    {
        cout << " Third";
    }
    if (x > 0 && y < 0)
    {
        cout << " Forth";
    }
    if (x == 0 && y == 0)
    {
        cout << " Center of the coordinate system";
    }
    if (x == 0 && y > 0 || x == 0 && y < 0)
    {
        cout << " Part of the Abscissa";
    }
    if (x > 0 && y == 0 || x < 0 && y == 0)
    {
        cout << " Part of the Ordinate";
    }
}

