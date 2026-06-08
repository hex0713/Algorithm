#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N{0};

    cin >> N;

    if((N % 3 == 0 && N % 2 == 1) ||
    N % 5 == 0 && N % 2 == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }


    return 0;
}