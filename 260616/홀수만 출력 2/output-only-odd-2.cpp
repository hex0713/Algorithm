#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int B{0}, A{0};

    cin >> B >> A;

    for(int i = B; i >= A; i-=2)
    {
        cout << i << " ";
    }
    return 0;
}