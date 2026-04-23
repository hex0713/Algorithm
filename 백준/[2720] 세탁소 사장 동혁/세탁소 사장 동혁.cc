#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T{ 0 }, C{ 0 };

	int Quarter{ 0 }, Dime{ 0 }, Nickel{ 0 }, Penny{ 0 };

	// 쿼터, 다임, 니켈, 페니 갯수 구하기
	// 쿼터 $0.25, 다임 $0.1, 니켈 $0.05, 페니 $0.01

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> C;

		Quarter = C / 25;
		C -= Quarter * 25;

		Dime = C / 10;
		C -= Dime * 10;

		Nickel = C / 5;
		C -= Nickel * 5;

		Penny = C;

		cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << "\n";
	}


	return 0;
}