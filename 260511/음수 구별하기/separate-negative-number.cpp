#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N{0};

    cin >> N;

    cout << N << endl;
    if(N < 0)
        cout << "minus\n";

    return 0;
}