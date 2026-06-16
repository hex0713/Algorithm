#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0}, B{0};

    cin >> A >> B;

    for(int i = A; i <= B; i += 2)
    {
        cout << i << " ";
    }

    return 0;
}