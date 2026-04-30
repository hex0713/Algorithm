#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a{0}, b{0};
    cin >> a >> b;

    cout.precision(1);
    cout << fixed;

    cout << a + b << " " << float(a + b) / (float)2;
    return 0;
}