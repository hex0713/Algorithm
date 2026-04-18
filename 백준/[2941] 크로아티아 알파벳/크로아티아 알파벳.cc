#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string word;
	cin >> word;
	
	const int MAX = word.length();
	int number{ 0 };
	for (int i = 0; i < MAX; i++)
	{
		// 크로아티아 알파벳이 될 수 있는 문자열이 왔는가?
		if (!(i + 1 < MAX))
		{
			number++;
			break;
		}
			

		bool bJumping = false;

		switch (word[i])
		{
		case 'c':
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				number++;
				bJumping = true;
			}
			break;
		case 'd':
			if (word[i + 1] == '-')
			{
				number++;
				bJumping = true;
			}
			else
			{
				if ((i + 2 < MAX) && word[i + 1] == 'z' && word[i + 2] == '=')
				{
					number++;
					bJumping = true;
					i++;
				}
			}
			break;
		case 'l':
		case 'n':
			if (word[i + 1] == 'j')
			{
				number++;
				bJumping = true;
			}
			break;
		case 's':
		case 'z':
			if (word[i + 1] == '=')
			{
				number++;
				bJumping = true;
			}
			break;
		}

		if (bJumping)
			i++;
		else
			number++;
		
	}

	cout << number << "\n";


	return 0;
}