#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x , y , z, P;
    int a;
    cout << " vuvedete tricifreno chislo: " << endl;
    cin >> a;

    z = a % 10;
    y = (a / 10) % 10;
    x = (a / 100) % 10;
    P = x + y + z;
    cout << x << " " << y << " " << z  <<" -> "<< P << endl;





}



