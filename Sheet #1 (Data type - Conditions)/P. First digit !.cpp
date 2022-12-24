#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	long x,z;
	cin >> x;
	z = x / 1000;
	if (z % 2 == 0)
		cout << "EVEN" << "\n";
	else
		cout << "ODD" << "\n";
	
}
