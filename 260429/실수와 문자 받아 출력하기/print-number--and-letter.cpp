#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c{0};
    float a{0}, b{0};

    cout.precision(2);
    cout << fixed;
    cin >> c;
    cin >> a >> b;

    cout << c << endl << a << endl << b << endl;
    return 0;
}