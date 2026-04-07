#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	
	int N{0}, Num{0};
	
	int min{1000000}, max{-1000000};
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		cin >> Num;
		
		if(Num < min)
			min = Num;
		if(Num > max)
			max = Num;
	}
	
	cout << min << " " << max << "\n";
	
	
    return 0;
}