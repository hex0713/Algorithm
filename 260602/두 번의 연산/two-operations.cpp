#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0};

    cin >> A;

    if(A % 2 != 0)
    {
        A += 3;
    }

    if(A % 3 == 0)
    {
        A /= 3;
    }

    cout << A << endl;

    return 0;
}