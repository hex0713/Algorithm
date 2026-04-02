#include <iostream>

using namespace std;

int main()
{
    int total{0}, n{0}, a{0}, b{0}, calculate{0};
    
    cin >> total >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        calculate += a * b;
    }
    
    if(total == calculate)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}