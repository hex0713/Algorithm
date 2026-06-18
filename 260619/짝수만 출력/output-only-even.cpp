#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A{0}, B{0};

    cin >> A >> B;

    while(A <= B)
    {
        cout << A << " ";
        A += 2;
    }
    return 0;
}