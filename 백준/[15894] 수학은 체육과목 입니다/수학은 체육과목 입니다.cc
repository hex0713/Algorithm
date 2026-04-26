#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long N{ 0 }, result{ 0 };
	cin >> N;

	result = N * 3 + N;

	cout << result << "\n";



	return 0;
}