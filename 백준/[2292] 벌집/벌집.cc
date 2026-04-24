#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N{ 0 }, Extent{ 1 }, Diagram{ 1 };
	
	cin >> N;
	while (N > Diagram)
	{
		Diagram += Extent++ * 6;
	}
	cout << Extent << "\n";

	return 0;
}