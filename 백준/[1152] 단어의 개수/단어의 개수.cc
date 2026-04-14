#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string words;
	int count{0};
	
	while(cin >> words)
	{
		count++;
	}
	
	cout << count << "\n";
	
	return 0;
}