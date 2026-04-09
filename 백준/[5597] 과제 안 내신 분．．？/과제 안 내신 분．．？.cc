#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int maxInput{28}, attendance{0};
	int min{0}, max{0};
	int student[30]{0};
	
	// 초기화
	for(int i = 0; i < 30; i++)
	{
		student[i] = i + 1;
	}
	
	// 입력
	for(int i = 0; i < maxInput; i++)
	{
		cin >> attendance;
		
		student[attendance - 1] = 0;
	}
	
	
	// 거르기
	for(int i = 0; i < 30; i++)
	{
		if(student[i] != 0)
		{
			cout << student[i] << "\n";
		}
			
	}
	
	
    return 0;
}