#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size][size];
	for(int i=0;i<size;i++){ //
		for(int z=0;z<size;z++){ 
			cin>>arr[i][z];
		}
	}
	long long sum1 = 0;
	long long sum2 = 0;
	for(int i=0;i<size;i++){
		for(int z=0;z<size;z++){ 
			if(i == z){
				sum1 += arr[i][z];
			}
			if(size - 1 - z == i){
				sum2 += arr[i][z];
			}
		}
	}
 
	cout<<abs(sum1 - sum2)<<endl;
}
