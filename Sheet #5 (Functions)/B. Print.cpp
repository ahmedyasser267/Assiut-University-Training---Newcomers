 
#include <iostream>
using namespace std;

int ahmed(int x)
{
	cin >> x ;
	
	for (int i = 1;i < x;i++)
	{
		cout << i <<" ";
	}
	return x;
}

int main()
{
	
	cout<<ahmed(0);
}
 
