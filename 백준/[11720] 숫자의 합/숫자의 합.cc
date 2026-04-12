
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N{0}, result{0};
	string num;
	
	cin >> N;
	cin >> num;
	for(int i = 0; i < N; i++)
	{
		result += (int)num[i] - 48;
	}
	
	cout << result << "\n";
	return 0;
}