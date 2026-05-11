#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A{0}, B{0};

    cin >> A >> B;

    if(A >= B)
        cout << A - B << endl;
    else
        cout << B - A << endl;



    return 0;
}