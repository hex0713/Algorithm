#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	// 정수 N개로 이루어진 수열 A 
	// 정수 X
	// A에서 X보다 작은 수를 모두 출력하는 프로그램
	int N{0}, A[10001]{0}, X{0};
	
	cin >> N >> X;
	
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for(int i = 0; i < N; i++)
	{
		if(A[i] < X)
			cout << A[i] << " ";
	}
	
	
    return 0;
}