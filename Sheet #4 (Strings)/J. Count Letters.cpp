#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value;
	cin>>value;
	
	sort(value.begin(),value.end());

	int size = value.size(); // 5
	for(int i=0;i<size;i++){  // i = 3
		char c = value[i]; // e
		int counter = 1;
		while(value[i] == value[++i]){ // i = 2
			counter++; // 2
		}
		i--;  // i = 1
		cout<<c<<" : "<<counter<<endl;
		// i = 2
	}
	
}
