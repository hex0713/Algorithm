#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N{ 0 };
	int minX{ 10000 }, maxX{ -10000 }, minY{ 10000 }, maxY{ -10000 };
	int x{ 0 }, y{ 0 };
	long long width{ 0 }, height{ 0 };

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;

		if (minX > x)
			minX = x;
		if (maxX < x)
			maxX = x;
		if (minY > y)
			minY = y;
		if (maxY < y)
			maxY = y;
	}

	width = maxX - minX;
	height = maxY - minY;

	cout << width * height << "\n";


	return 0;
}