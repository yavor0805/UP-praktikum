#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int n;

	cin >> n;

	for (int i = 1; i < 101; i++)
	{
		if (i % n == 0)
		{
			cout << i << " ";
		}
	}




}
