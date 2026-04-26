#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a{ 0 }, b{ 0 }, c{ 0 };

	cin >> a >> b >> c;

	if (a >= b && a >= c && a >= b + c)
	{
		a = b + c - 1;
	}

	else if (b >= a && b >= c && b >= a + c)
	{
		b = a + c - 1;
	}

	else if (c >= a && c >= b && c >= a + b)
	{
		c = b + a - 1;
	}

	cout << a + b + c << "\n";

	
	
	return 0;
}