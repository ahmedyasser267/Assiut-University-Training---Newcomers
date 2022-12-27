#include <bits/stdc++.h>
using namespace std;
int main() {
	double
		x;
	cin >> x;
	double con = 0,sum=0;
	for (int i = 2; i <= x; i++)
	{
		sum += log10(i);
	}
	cout << "Number of digits of " << x << "! is " << (int)sum + 1 << endl;
}
