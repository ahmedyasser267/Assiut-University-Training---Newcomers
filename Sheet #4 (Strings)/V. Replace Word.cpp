#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string value; 
	cin>>value;
	int size = value.size();

	for(int i=0;i<size;i++){ // i =8
		if(value[i] == 'E' && value[i+1] == 'G' && value[i+2] == 'Y'
		                   && value[i+3] == 'P'&& value[i+4] == 'T'){
		    i+=4; // 11
		    cout<<" ";
		} else {
			cout<<value[i];
		}
		// i = 12
	}
}
