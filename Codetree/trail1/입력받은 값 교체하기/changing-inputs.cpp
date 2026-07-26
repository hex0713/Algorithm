#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{0},b{0},empty{0};

    cin >> a >> b;

    empty = a;
    a = b;
    b = empty;

    cout << a << " " << b << endl;

    return 0;
}