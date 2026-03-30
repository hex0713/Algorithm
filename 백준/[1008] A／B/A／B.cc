#include <iostream>

using namespace std;

int main()
{
    int A, B;
    
    cin >> A >> B;
    
    cout << fixed;
    cout.precision(9);
    cout << (double)A/B << endl;
    
    return 0;
}