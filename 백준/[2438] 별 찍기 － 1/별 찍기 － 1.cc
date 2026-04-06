#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int star{0};
	
	cin >> star;
	
	for(int i = 1; i <= star; i++)
	{
		for(int j = 0; j < i; j++)
		{
			cout << "*";
		}
		
		cout << "\n";
		
	}
	
	
    return 0;
}