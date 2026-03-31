#include <iostream>
using namespace std;

int main()
{
    int x{0}, y{0};
    
    cin >> x >> y;
    
    if(x > 0)
    {
        // 1, 4 사분면
        if(y > 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
    else
    {
        // 2, 3 사분면
        if(y > 0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
    return 0;
}