#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float N{0f};

    cin >> N;

    cout.precision(1);
    cout << fixed;

    cin >> N;
    cout << N * 30.48 << endl;
    return 0;
}