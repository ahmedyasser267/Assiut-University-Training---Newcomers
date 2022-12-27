#include<bits/stdc++.h>
using namespace std;
int main()
{
	int wordSize; // 4
	cin>>wordSize;
	while(wordSize--){
		string value; 
	
		cin>>value;
		int size = value.size(); 
		if(size > 10){
			cout<<value[0]<<size-2<<value[size-1]<<endl;
		} else {
			cout<<value<<endl;
		}
	}
	
	
}
