#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int A{0}, B{0}, C{0};

    cin >> A >> B >> C;

    if(B > A && B < C)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}