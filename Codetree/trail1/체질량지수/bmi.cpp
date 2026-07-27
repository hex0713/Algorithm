#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h{0}, w{0}, b{0};

    cin >> h >> w;

    b = 10000 * w / (h * h);
    cout.precision(1);
    cout << fixed;
    
    cout << b << endl;
    if(b >= 25)
        cout << "Obesity" << endl;
    
    return 0;
}