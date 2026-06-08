#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int month{0};

    cin >> month;

    if(3 <= month && month <= 5)
    {
        cout << "Spring" << endl;
    }
    else if(6 <= month && month <= 8)
    {
        cout << "Summer" << endl;
    }
    else if(9 <= month && month <= 11)
    {
        cout << "Fall" << endl;
    }
    else
    {
        cout << "Winter" << endl;
    }

    return 0;
}