#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int front{0}, back{0};
    char c;

    cin >> c >> c >> c >> c >> front >> c >> back;

    cout << "010-" << back << "-" << front;
    return 0;
}