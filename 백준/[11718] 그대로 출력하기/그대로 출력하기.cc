#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string words;
	while(getline(cin, words))
	{
		cout << words << "\n";
	}
	
	return 0;
}