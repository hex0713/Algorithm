#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float a{0.f};

    cin >> a;

    cout << fixed;
    cout.precision(2);

    cout << a + 1.5f << endl;

    return 0;
}