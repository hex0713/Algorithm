#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0}, B{0}, C{0};

    cin >> A >> B >> C;

    if((A < B && A > C) || (A > B && A < C))
    {
        cout << A << endl;
    }
    else if((B < A && B > C) || (B > A && B < C))
    {
        cout << B << endl;
    }
    else
    {
        cout << C << endl;
    }
    return 0;
}