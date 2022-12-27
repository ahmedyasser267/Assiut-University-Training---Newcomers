#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	
	string value;
	
	cin>>value;
	long long sum = 0; //
	for(int i=0;i<size;i++){
		
		sum += value[i] - '0';
	}
	cout<<sum<<endl;
	
}
