#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N{ 0 };
	cin >> N;

	for (int j = 0; j < N; j++)
	{
		int spaceCount = N - 1 - j;
		int starCount = 2 * j + 1;

		for (int i = 0; i < spaceCount; i++)
		{
			cout << " ";
		}

		for (int i = 0; i < starCount; i++)
		{
			cout << "*";
		}
		cout << "\n";

	}


	for (int j = N - 2; j >= 0; j--)
	{
		int spaceCount = N - 1 - j;
		int starCount = 2 * j + 1;

		for (int i = 0; i < spaceCount; i++)
		{
			cout << " ";
		}

		for (int i = 0; i < starCount; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}

