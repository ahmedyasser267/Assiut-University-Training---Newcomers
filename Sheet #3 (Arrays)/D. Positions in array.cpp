#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; 
	cin>>size;
	for(int i=0;i<size;i++){ 
		int num;
		cin>>num;
		if(num <= 10){
			cout<<"A["<<i<<"] = "<<num<<endl;
		}
	}
}
