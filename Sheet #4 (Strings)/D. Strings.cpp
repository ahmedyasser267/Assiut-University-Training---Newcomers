#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string a, z,l,c,o;
	cin >> a >>z;
	
	int len = a.size();
	int len2 = z.size();
	cout << len << " " << len2 << endl;
	o = a + z;
	cout << o<<endl;
	char first = a[0];
	a[0] = z[0];
	z[0] = first;
	cout << a << " " << z;
	








}
