#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a{0}, b{0}, c{0};

    int min{101};

    cin >> a >> b >> c;

    min = a;

    if(min > b)
    {
        min = b;
    }

    if(min > c)
    {
        min = c;
    }
    
    cout << min << endl;
    

    return 0;
}