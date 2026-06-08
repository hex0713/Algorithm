#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{0}, b{0}, c{0};
    int max{-100};

    cin >> a >> b >> c;

    max = a;

    if(max < b)
        max = b;

    if(max < c)
        max = c;

    cout << max << endl;
    return 0;
}