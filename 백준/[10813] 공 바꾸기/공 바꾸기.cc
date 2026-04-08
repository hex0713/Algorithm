#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N{0}, M{0};
	int i{0}, j{0};
	
	int basket[101]{0};
	
	for(int i = 0; i <= 100; i++)
	{
		basket[i] = i;
	}
	
	cin >> N >> M;
	// N개에 M번
	for(int a = 0; a < M; a++)
	{
		cin >> i >> j;
		
		int src = basket[i];
		
		basket[i] = basket[j];
		basket[j] = src;
	}
	
	for(int a = 1; a <= N; a++)
	{
		cout << basket[a] << " ";
	}
	
	cout << flush;
	
	
    return 0;
}