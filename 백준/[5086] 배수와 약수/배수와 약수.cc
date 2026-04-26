#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x{ -1 }, y{ -1 };
	string result;


	while(true)
	{
		cin >> x >> y;

		if (x == 0 && y == 0)
			break;

		if (y % x == 0)
		{
			result = "factor";
		}
		else if (x % y == 0)
		{
			result = "multiple";
		}
		else
		{
			result = "neither";
		}

		cout << result << "\n";
	}
	
	return 0;
}