#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string a, b;
	
	cin >> a;
	cin >> b;
	
	char empty = a[0];
	a[0] = a[2];
	a[2] = empty;
	
	empty = b[0];
	b[0] = b[2];
	b[2] = empty;
	
	bool Big_A = false;
	if(a[0] > b[0])
	{
		Big_A = true;
	}
	else if(a[0] == b[0] && a[1] > b[1])
	{
		Big_A = true;
	}
	else if(a[0] == b[0] && a[1] == b[1] && a[2] > b[2])
	{
		Big_A = true;
	}
	
	if(Big_A)
	{
		cout << a << "\n";
	}
	else
	{
		cout << b << "\n";
	}
	
	return 0;
}