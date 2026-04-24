#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int Length{ 0 }, Front{ 0 }, Back{ 0 }, Day{ 0 };

	cin >> Front >> Back >> Length;
	// 마지막날에는 미끄러지지 않으므로 마지막 날은 빼고 계산하면됨 와 천재

	Length -= Front;

	Day = Length / (Front - Back) + 1;

	if (Length % (Front - Back) > 0)
		Day++;



	cout << Day << "\n";
	

	
	return 0;
}