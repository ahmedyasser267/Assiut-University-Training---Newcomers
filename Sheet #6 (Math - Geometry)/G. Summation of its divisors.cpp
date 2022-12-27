#include <bits/stdc++.h>
using namespace std;
void div()
{

};
int main()
{
	long long num; // 12
	cin >> num;
	long long result = 0;
	
	for (int i = 1; i <= sqrt(num); i++) {
		if (num % i == 0) {
			result += i;
			if (i != sqrt(num)) {
				result += num / i;
			}
		}
	}
	cout << result << endl;
}
// 12 
//
