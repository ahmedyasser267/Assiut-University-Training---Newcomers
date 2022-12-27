 
#include <iostream>
using namespace std;

int main()
{
	int counter;
	int x,y;
	cin >> counter;
	while (counter--)
	{
		cin >> x>>y;
		while (x==y)
		{
			cout << "Square"<<endl;
			break;
			return 0;
		}
		if (x != y)
			cout << "Rectangle"<<endl;
	}
	
}

 
