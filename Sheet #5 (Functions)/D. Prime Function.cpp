#include<bits/stdc++.h>
using namespace std;
bool prime(int num){ 
 int newNumber = sqrt(num);
 int flag = 0;
 for(int i = 2;i<= newNumber;i++){
 	if(num % i == 0){
 		flag = 1;
 		break;
	 }
 }
 return flag;
}
int main(){
	int size;
	cin>>size;  
	while(size--){  
		int num;
		cin>>num;
		if(num == 1){
			cout<<"NO"<<endl;
			continue;
		}
		int pr = prime(num);
		if(pr == 1){
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
	
}
