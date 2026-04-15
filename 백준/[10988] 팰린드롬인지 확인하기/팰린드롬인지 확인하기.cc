#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string word;
	cin >> word;
	bool isSAME = true;
	
	int MAX = word.length() / 2;
	for(int i = 0; i < MAX; i++)
	{
		if(word[i] != word[word.length() - i - 1])
		{
			isSAME = false;
			break;
		}
	}
	
	cout << (int)isSAME << "\n";
	
	
	return 0;
}