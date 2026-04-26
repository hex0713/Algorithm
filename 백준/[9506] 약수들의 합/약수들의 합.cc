#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	while (true)
	{
		int N{ 0 }, result{ 0 };
		string calculation;
		cin >> N;

		if (N  == -1)
			break;
		
		calculation = std::to_string(N) + " = ";
		bool isFirst = true;

		for (int i = 1; i <= N / 2; i++)
		{
			
			if (N % i == 0)
			{
				result += i;

				if(!isFirst)
					calculation += " + ";

				calculation += to_string(i);	

				isFirst = false;
			}
		}

		if (result == N)
			cout << calculation << "\n";
		else
			cout << N << " is NOT perfect.\n";
	}

	return 0;
}