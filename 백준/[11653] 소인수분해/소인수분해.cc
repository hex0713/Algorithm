#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N{ 0 };

	cin >> N;
	for (int i = 2; i * i <= N; i)
	{
		if (N % i == 0)
		{
			N = N / i;
			cout << i << "\n";
		}
		else
		{
			i++;
		}
	}

	if(N > 1)
		cout << N << "\n";


	return 0;
}