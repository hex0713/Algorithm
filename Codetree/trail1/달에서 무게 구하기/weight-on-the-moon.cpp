#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(6);

    int chu = 13;
    float gravity = 0.165f;

    cout << chu << " * " << gravity << " = " << chu * gravity << endl;
    return 0;
}