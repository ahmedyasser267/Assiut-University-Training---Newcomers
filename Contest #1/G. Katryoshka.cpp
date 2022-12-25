#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int eye, mouth, body, toys = 0;
    cin >> eye >> mouth >> body;
    if (mouth < eye && mouth < body) toys = mouth + min(((eye - mouth) / 2), (body - mouth));
    else toys = min(eye, body);
    cout << toys;
    return 0;
}
 
