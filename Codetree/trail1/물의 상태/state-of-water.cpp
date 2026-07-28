#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n{0};

    cin >> n;

    cout << (n < 0 ? "ice" : n >= 100 ? "vapor" : "water") << endl;
    

    return 0;
}