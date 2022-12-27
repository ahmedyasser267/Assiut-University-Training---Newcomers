#include<bits/stdc++.h>
using namespace std;
const int s = 1000; 
int countNumber(int arr[s],int size){
	int count = 1;
	for(int i=1;i<size;i++){
		if(arr[i] != arr[i-1]){
			count++;
		}
	}
	return count;
}
int main()
{
	int size;
	cin>>size; // 3
	if(size == 0){
		cout<<0;
		return 0;
	}
	int arr[s];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	
	cout<<countNumber(arr,size)<<endl;
}

















------------ test 102 
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,counter=1; cin >> a; 
  int arr[10000];
 
  for (int i = 0; i < a; i++)
  {
 
    cin >> arr[i];
 
  }
  
  sort(arr, arr+a);
  for (int k = 1; k < a; k++)
  {
    if (arr[k - 1] != arr[k])
      counter++;
  }
  cout << counter;
 
 
  return 0;
}
