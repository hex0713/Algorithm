#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string word;
	cin >> word;

	const int alphaLength = 26;
	int wordLength = word.length();
	int alpha[alphaLength]{ 0 };
	int BigAlpha = 65;
	int SmallAlpha = 97;
	int max = 0;

	// A = 65, a = 97

	for (int i = 0; i < word.length(); i++)
	{
		int value = word[i];

		if (value - SmallAlpha >= 0)
		{

			alpha[value - SmallAlpha]++;
			if (max < alpha[value - SmallAlpha])
				max = alpha[value - SmallAlpha];
		}
		else
		{
			alpha[value - BigAlpha]++;

			if (max < alpha[value - BigAlpha])
				max = alpha[value - BigAlpha];
		}
	}

	int check = 0;
	int result = 0;
	for (int i = 0; i < alphaLength; i++)
	{
		if (alpha[i] == max)
		{
			check++;
			result = i;
		}
			
	}

	if (check > 1)
		cout << "?\n";
	else
	{
		cout << char(result + BigAlpha) << "\n";
	}


	return 0;
}