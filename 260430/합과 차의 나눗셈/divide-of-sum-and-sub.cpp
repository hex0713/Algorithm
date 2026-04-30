#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a{0}, b{0};

    cout.precision(2);
    cout << fixed;

    cin >> a >> b;
    cout << float(a + b) / float(a - b) << endl;

    return 0;
}