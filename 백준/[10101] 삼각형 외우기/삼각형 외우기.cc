#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x{ 0 }, y{ 0 }, z{ 0 }, result{ 0 };

	cin >> x >> y >> z;

	result = x + y + z;

	if (result == 180)
	{
		if (x == y && y == z && x == z)
		{
			cout << "Equilateral\n";
		}
		else if (x == y || y == z || x == z)
		{
			cout << "Isosceles\n";
		}
		else
		{
			cout << "Scalene\n";
		}

	}
	else
	{
		cout << "Error\n";
	}
	
	return 0;
}