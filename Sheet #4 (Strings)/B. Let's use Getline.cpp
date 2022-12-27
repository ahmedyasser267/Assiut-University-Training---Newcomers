#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; 
	getline(cin,value);
	
	for(int i=0;i<value.size();i++){
		if(value[i] == '\\'){
			break;
		}
		cout<<value[i];
	}
}
