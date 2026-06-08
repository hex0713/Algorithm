#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n{0};

    cin >> n;

    if(n == 2)
    {
        cout << "28" << endl;
    }
    else if(n == 4 || n == 6 || n == 9 || n == 11)
    {
        cout << "30" << endl;
    }
    else
    {
        cout << "31" << endl;
    }

    return 0;
}