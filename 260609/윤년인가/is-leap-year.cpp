#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Y{0};

    cin >> Y;

    if(Y % 4 != 0 || (Y % 4 == 0 && Y % 100 == 0 && Y % 400 != 0))
    {
        // 평년
        cout << "false" << endl;
    }
    else
    {
        // 윤년
        cout << "true" << endl;
    }

    
    return 0;
}