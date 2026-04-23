#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N{ 0 }, result{ 0 }, square{ 1 };

	cin >> N;

	// N 이 늘어날때마다 정사각형이 줄이 2배씩 늘어남
	// N 이 1일때 가로줄의 사각형은 2개
	// N 이 2일때 가로줄의 사각형은 4개
	for (int i = 0; i < N; i++)
		square = square * 2;

	result = (square + 1) * (square + 1);

	cout << result << "\n";
	
	return 0;
}