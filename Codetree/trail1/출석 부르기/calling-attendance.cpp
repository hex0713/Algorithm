#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int attendance{0};

    cin >> attendance;

    if(attendance == 1)
    {
        cout << "John" << endl;
    }
    else if(attendance == 2)
    {
        cout << "Tom" << endl;
    }
    else if(attendance == 3)
    {
        cout << "Paul" << endl;
    }
    else
    {
        cout << "Vacancy" << endl;
    }

    return 0;
}