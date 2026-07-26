#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float cm{30.48f};
    float N{0.f};

    cin >> N;

    cout << fixed;
    cout.precision(1);
    cout << N * cm << endl;

    return 0;
}