#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N{0};
    cin >> N;

    if(N >= 80)
        cout << "pass" << endl;
    else
        cout << 80 - N << " more score" << endl;

    return 0;
}