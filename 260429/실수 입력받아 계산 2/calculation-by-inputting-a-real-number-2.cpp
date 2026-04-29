#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float a{0.0f};

    cout.precision(2);
    cout << fixed;

    cin >> a;
    cout << a + 1.5 << endl;

    return 0;
}