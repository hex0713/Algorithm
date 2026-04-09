#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	// 바구니 N개
	// 각각 바구니에 1번부터 N번까지 번호가 순선대로
	// 바구니는 왼쪽부터 1번 바구니부터 일렬로 세워짐
	// 지정한 범위는 역순으로 
	// 그리고 순차적으로 출력
	int N{0}, M{0}, i{0}, j{0};
	int basket[101]{0};
	for(int i = 0; i < 101; i++)
	{
		basket[i] = i + 1;
	}
	
	
	// N 총 바구니 갯수
	// M 총 역순 만드는 방법 횟수
	
	cin >> N >> M;
	
	int empty{0};
	for(int a = 0; a < M; a++)
	{
		// i번째부터 j번째 바구니는 역순으로 교환
		cin >> i >> j;
		
		// 생각하기 편하게 미리 -1
		i = i - 1;
		j = j - 1;
		
		
		// 바뀌어야할 총 바구니 갯수 j - i / 2;
		for(int b = 0; b < (j - i + 1) / 2; b++)
		{
			empty = basket[i + b];
			basket[i + b] = basket[j - b];
			basket[j - b] = empty;
		}
	}
	
	for(int a = 0; a < N; a++)
	{
		cout << basket[a] << " ";
	}
	
    return 0;
}