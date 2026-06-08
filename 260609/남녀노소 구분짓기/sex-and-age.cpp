#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender{0};
    int age{0};

    cin >> gender >> age;
    if(gender)
    {
        // girl
        if(age >= 19)
        {
            cout << "WOMAN" << endl;
        }
        else
        {
            cout << "GIRL" << endl;
        }
    }
    else
    {
        // man
        if(age >= 19)
        {
            cout << "MAN" << endl;
        }
        else
        {
            cout << "BOY" << endl;
        }

    }
    return 0;
}