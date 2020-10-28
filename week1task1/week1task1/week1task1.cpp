#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 3, x = 11, y = 17, z = 8;
    int P1, S1, P2;
    float S2, p;

    P1 = 2 * a + 2 * b;
    S1 = a * b;

    cout << " Perimetur na pravougulnika: " << P1 << endl;
    cout << " Lice na pravougulnik: " << S1 << endl;

    P2 = x + y + z;
    p = P2 / 2;

    S2 = sqrt(p * (p - x) * (p - y) * (p - z));


    cout << " Perimetur na triugulnika: " << P2 << endl;
    cout << " Lice na triugulnika: "; printf("%.2f", S2);

}
