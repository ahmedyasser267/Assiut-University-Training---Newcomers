#include <bits/stdc++.h>
using namespace std;
void a(vector<int>arr,int size)
{
	
	for (int k = 0;k < size;k++)
	{
		cin >> arr[k];
	}
	sort(arr.begin(),arr.end());
	cout << arr[0] << " " << arr[size - 1];
	
}


int main()
{
	int size;
	cin >> size;
	vector<int>arr(size);
	a(arr, size);
	return 0;
}
