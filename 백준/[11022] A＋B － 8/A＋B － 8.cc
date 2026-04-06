#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int A{0}, B{0}, T{0};
	
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n";
	}
	
	
    return 0;
}