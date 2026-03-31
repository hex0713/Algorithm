#include <iostream>
using namespace std;

int main()
{
    int year{0};
    int otherYear{0};
    cin >> year;
    
    // 윤년이면 1 아니면 0
    if(year % 4 == 0)
    {
        if(year % 400 == 0)
        {
            otherYear = 1;
        }
        else
        {
            if(year % 100 != 0)
                otherYear = 1;
        }
    }

    cout << otherYear << endl;
    
    return 0;
}