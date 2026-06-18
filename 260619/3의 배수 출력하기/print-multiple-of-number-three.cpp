#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N{0};
    int i = 1;

    cin >> N;

    while(i * 3 <= N)
    {
        cout << i++ * 3 << " ";
    }
    return 0;
}