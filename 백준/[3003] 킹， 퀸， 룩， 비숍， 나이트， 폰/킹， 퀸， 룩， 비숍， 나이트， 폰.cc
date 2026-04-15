#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int king{0}, queen{0}, look{0}, bishop{0}, knight{0}, pawn{0};
	int x[6]{0};
	
	cin >> king >> queen >> look >> bishop >> knight >> pawn;
	
	x[0] = 1 - king;
	x[1] = 1 - queen;
	x[2] = 2 - look;
	x[3] = 2 - bishop;
	x[4] = 2 - knight;
	x[5] = 8 - pawn;
	
	for(int i = 0; i < 6; i++)
	{
		cout << x[i] << " ";
	}
	cout << flush;
	
	return 0;
}