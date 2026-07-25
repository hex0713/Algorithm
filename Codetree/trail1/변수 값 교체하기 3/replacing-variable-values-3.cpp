#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{3}, b{5}, empty{0};

    empty = a;
    a = b;
    b = empty;

    cout << a << endl;
    cout << b << endl;

    return 0;
}