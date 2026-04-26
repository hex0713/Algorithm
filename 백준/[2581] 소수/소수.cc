#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M{ 0 }, N{ 0 };

	int Total{ 0 }, Minimum{ 0 };

	// M <= ? <= N 사이의 소수의 합과 최솟값
	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		bool isOne = true;

		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				isOne = false;
				break;
			}
				
		}

		if (isOne && i != 1)
		{
			Total += i;
			if (Minimum == 0)
				Minimum = i;

		}
	}


	if (Total == 0 && Minimum == 0)
	{
		cout << "-1" << "\n";
	}
	else
	{
		cout << Total << "\n";
		cout << Minimum << "\n";
	}
	
	return 0;
}