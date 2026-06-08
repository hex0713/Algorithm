#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0};

    cin >> A;

    if(A % 3 == 0 || A % 5 == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}