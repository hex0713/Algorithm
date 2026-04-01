#include <iostream>

using namespace std;

int main()
{
    int x{0}, y{0}, z{0}, result{0}, num{0};
    
    cin >> x >> y >> z;
    
    // 같은 눈이 3개인 경우
    if(x == y && y == z)
    {
        result = 10000 + 1000 * x;
    }
    // 같은 눈이 2개인 경우
    else if(x == y)
    {
        result = 1000 + 100 * x;
    }
    else if(x == z)
    {
        result = 1000 + 100 * x;
    }
    else if(y == z)
    {
        result = 1000 + 100 * y;
    }
    // 같은 눈이 없는 경우
    else
    {
        num = x;
        if(num < y)
            num = y;
        if(num < z)
            num = z;
        
        result = num * 100;
    }
    
    cout << result << endl;
   
    
    return 0;
}