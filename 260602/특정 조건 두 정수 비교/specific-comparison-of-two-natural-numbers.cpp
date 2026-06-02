#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0}, B{0};

    cin >> A >> B;

    if(A < B)
    {
        cout << true << " ";
    }
    else
    {
        cout << false << " ";
    }

    if(A == B)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}