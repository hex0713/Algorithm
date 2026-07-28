#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N{0};

    cin >> N;

    if(N >= 3000)
    {
        cout << "book" << endl;
    }
    else if(N >= 1000)
    {
        cout << "mask" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}