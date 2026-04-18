#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int majorsCount{ 0 };
	float majorsGrade{ 0.0f };
	
	for (int i = 0; i < 20; i++)
	{
		int credit{ 0 };
		float grade{ 0 };
		bool bSkip{ false };
		for (int j = 0; j < 3; j++)
		{
			string major;
			cin >> major;

			if (j == 0)
				continue;
			else if (j == 1)
			{
				
				if (major[0] == '1')
					credit = 1;
				else if (major[0] == '2')
					credit = 2;
				else if (major[0] == '3')
					credit = 3;
				else
					credit = 4;
			}
			else
			{
				// 학점 * 평점
				if (major == "P")
					bSkip = true;
				else if (major == "F")
				{
					grade = 0.0f;
				}
				else if(major == "A+")
				{
					grade = credit * 4.5;
				}
				else if (major == "A0")
				{
					grade = credit * 4.0;
				}
				else if (major == "B+")
				{
					grade = credit * 3.5;
				}
				else if (major == "B0")
				{
					grade = credit * 3.0;
				}
				else if (major == "C+")
				{
					grade = credit * 2.5;
				}
				else if (major == "C0")
				{
					grade = credit * 2.0;
				}
				else if (major == "D+")
				{
					grade = credit * 1.5;
				}
				else if (major == "D0")
				{
					grade = credit * 1.0;
				}
			}
		}

		if (!bSkip)
		{
			majorsCount += credit;
			majorsGrade += grade;
		}
	}

	cout << (float)(majorsGrade / majorsCount) << "\n";

	return 0;
}