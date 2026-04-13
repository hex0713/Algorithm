#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int T{0}, R{0};
	
	string s;
	
	cin >> T;
	
	for(int i = 0; i < T; i++)
	{
		string result;
		cin >> R >> s;
		
		for(int j = 0; j < s.length(); j++)
		{
			for(int k = 0; k < R; k++)
			{
				result += s[j];
			}
		}
		
		cout << result << "\n";
	}
	
	return 0;
}
