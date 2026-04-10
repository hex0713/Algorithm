#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T{0};
	cin >> T;
	
	for(int i = 0; i < T; i++)
	{
		string word;
		cin >> word;
		cout << word[0] << word[word.length() - 1] << "\n";
	}

	return 0;
}