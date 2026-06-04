#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{0}, b{0}, c{0};

    cin >> a >> b >> c;

    int min = 0;

    if (a <= b)
    {
        if (a <= c)
            min = a;
        else
            min = c;
    }
    else
    {
        if (b <= c)
            min = b;
        else
            min = c;
    }

    if(a == min)
    {
        cout << true << " ";
    }
    else
    {
        cout << false << " ";
    }

    if(a == b && b == c)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}