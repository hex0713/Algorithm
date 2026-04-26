// 아래와 같이 풀었는데 일단 틀렸으면 틀렸다 라고만 해줘.
// 맞았으면 코드리뷰해줘. 디테일하게 더 좋은 코드는 있는지 확인해줘.

//# 백준 알고리즘 5073번 문제

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x{ 0 }, y{ 0 }, z{ 0 };

	while (true)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0)
			break;

		// 가장 긴변의 길이가 나머지 변의 길이 합보다 길면 삼각형이 아님
		if (x >= y && x >= z && x >= y + z)
		{
			// x가 가장 긴데, y + z 합보다 더 길거나 같으면 삼각형이 아님..
			cout << "Invalid\n";
			continue;
		}

		if (y >= x && y >= z && y >= x + z)
		{
			cout << "Invalid\n";
			continue;
		}

		if (z >= x && z >= y && z >= x + y)
		{
			cout << "Invalid\n";
			continue;
		}


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
	
	
	return 0;
}