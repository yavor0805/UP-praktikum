#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x, a, b, c , V;

    cout << " vuvedete X: ";
    cin >> x;

    a = pow(x,3);
    b = a; //tui kato x * (x/2) * 2x = pow(x,3) pri vsiako x
    c = (pow(x, 3) * 3) / 8;

    V = a + b + 2 * c;

    cout << " obemut na creepera pri vuvedenata stoinost na X e: " << V << endl;










}
