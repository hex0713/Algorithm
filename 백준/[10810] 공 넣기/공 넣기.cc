#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N{0}, M{0};
	int i{0}, j{0}, k{0};
	
	int basket[101]{0};
	
	cin >> N >> M;
	// N개에 M번
	for(int a = 0; a < M; a++)
	{
		cin >> i >> j >> k;
		
		for(int b = i; b <= j; b++)
		{
			basket[b] = k;
		}
	}
	
	for(int a = 1; a <= N; a++)
	{
		cout << basket[a] << " ";
	}
	
	cout << flush;
	
	
    return 0;
}