#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int A{0};

    cin >> A;

    if(A % 3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    if(A % 5 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}