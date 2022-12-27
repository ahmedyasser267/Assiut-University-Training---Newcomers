#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1000];
	int u;
	cin >> u;
	
	int n[100000];
	for (int i = 0;i < u;i++)
	{
		cin >> n[i];
	}
	int s[100000];
	for (int i = 0;i < u;i++)
	{
		cin >> s[i];
	}
	

	for (int i = 0;i < u;i++)
		cout << s[i] << " ";
	for (int i = 0;i < u;i++)
		cout << n[i] << " ";
}
