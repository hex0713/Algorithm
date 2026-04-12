#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N{0};
	double score[1000]{0};
	double average{0};
	int max{0};
	
	cin >> N;
	
	// 최고 점수 계산
	for(int i = 0; i < N; i++)
	{
		cin >> score[i];
		
		if(max < score[i])
			max = score[i];
	}
	
	for(int i = 0; i < N; i++)
	{
		// 점수 사기치기
		score[i] = score[i] / max  * 100;
		average += score[i];
	}
	
	cout << average / N << "\n";


	return 0;
}