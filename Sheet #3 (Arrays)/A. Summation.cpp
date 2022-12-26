#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s;
	cin >> s;

	long long sum = 0;
	for (int i = 0;i < s;i++)
	{
		int n;
		cin >> n;
		sum += n;

	}
	cout << abs(sum);
}
---------------------
  test 3 wrong 

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s;
	cin >> s;

	int sum = 0;
	for (int i = 0;i < s;i++)
	{
		int n;
		cin >> n;
		sum += n;

	}
	cout << abs(sum);
}


 
