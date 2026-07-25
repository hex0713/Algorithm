#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{5}, b{6}, c{7}, empty1{0}, empty2{0};

    empty1 = b;
    empty2 = c;
    b = a;
    c = empty1;
    a = empty2;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}