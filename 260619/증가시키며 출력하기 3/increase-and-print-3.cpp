#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i = 10;

    cout << i << " ";
    while((i = i + 2) <= 26)
    {
        cout << i << " ";
    }
    return 0;
}