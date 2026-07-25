#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout.precision(1);
    cout << fixed;

    float ft = 9.2f;
    float mi = 1.3f;

    cout << ft << "ft = " << ft * 30.48 << "cm" << endl;
    cout << mi << "mi = " << mi * 160934 << "cm" << endl;
    return 0;
}