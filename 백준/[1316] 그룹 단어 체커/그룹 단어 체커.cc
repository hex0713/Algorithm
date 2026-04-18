#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int number{ 0 };
	int count{ 0 };
	cin >> number;

	for(int i = 0; i < number; i++)
	{
		string word;
		cin >> word;

		char beforeWord = '\0';
		bool bContinuous = true;
		bool bUsedAlpha[26]{ false };

		for (int j = 0; j < word.length(); j++)
		{
			int idx = word[j] - 'a';

			if (bUsedAlpha[idx])
			{
				bContinuous = false;
				break;
			}

			if (beforeWord != '\0')
			{
				if (beforeWord != word[j])
				{
					bUsedAlpha[beforeWord - 'a'] = true;
				}
					
			}
			
			beforeWord = word[j];
		}

		if (bContinuous)
			count++;
	}
	
	cout << count << "\n";
	

	return 0;
}