#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; // 5
	int arr[size];
	for(int i=0;i<size;i++){ 
		cin>>arr[i];
	}
	int result = 0;
	for(int i=0;i<size;i++){
	int counter = 0; 
		if(arr[i] % 2 != 0){ 
			cout<<0<<endl;
			return 0;
		}
		while(arr[i] % 2 == 0){
			counter++;
			arr[i] /=2;
		}
		if(i == 0 || counter < result){
			result = counter;
		}
	}
	cout<<result<<endl;
}
