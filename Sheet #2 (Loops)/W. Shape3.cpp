#include<bits/stdc++.h>
using namespace std;
int main()
{
	int lines;
	cin>>lines;
	int spaces1 = lines - 1;
	for(int i=1;i<=lines;i++){
		for(int z=1;z<=spaces1;z++){
			cout<<" ";
		}
		for(int x =1;x<i*2;x++){ 
			cout<<"*";
		}
		cout<<endl;
		spaces1--;
	}
	spaces1 = 1;
	for(int i=lines;i>=1;i--){ 
		for(int z=1;z<spaces1;z++){ 
			cout<<" ";
		}
		for(int x =i*2;x>1;x--){ 
			cout<<"*";
		}
		cout<<endl;
		spaces1++;
	}
	
}
