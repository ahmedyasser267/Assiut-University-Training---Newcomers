#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long c;
	int a, b;
	char q , s;
	cin >> a >> s >> b >> q >> c;
	if ((a + b) == c && q == '=' && s == '+') 
		cout << "Yes";
	else if ((a + b) != c && q == '=' && s == '+')
		cout << a + b;
	
	if ((a - b) == c && q == '=' && s == '-')
		cout << "Yes";
	else if ((a - b) != c && q == '=' && s == '-')
		cout << a - b;
	if ((a * b) == c && q == '=' && s == '*')
		cout << "Yes";
	else if ((a * b) != c && q == '=' && s == '*')
		cout << a * b;
}
