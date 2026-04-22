#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	int N{ 0 }, B{ 0 };

	cin >> N >> B;

	// 들어온 데이터를 B 로 나누고 몫은 상위계산, 나머지는 현재 자릿수

	string result;
	int remain{ 0 };
	if (N == 0)
		cout << "0\n";
	else
	{
		while (N != 0)
		{
			// 나머지는 현재 자릿수
			remain = N % B;

			// 몫은 다음 반복문때
			N = N / B;

			if (remain >= 10)
				result += ('A' + (remain - 10));
			else
				result += ('0' + (remain));

		}

		reverse(result.begin(), result.end());

		cout << result << "\n";
	}

	return 0;
}