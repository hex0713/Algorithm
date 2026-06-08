#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int score{0};

    cin >> score;

    if(score >= 90)
    {
        cin >> score;
        if(score >= 95)
        {
            cout << "100000" << endl;
        }
        else if(score >= 90)
        {
            cout << "50000" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        
    }
    else
    {
        cin >> score;
        cout << "0" << endl;

    }

    return 0;
}