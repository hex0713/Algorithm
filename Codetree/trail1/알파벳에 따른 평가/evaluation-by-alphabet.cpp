#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    char grade;

    cin >> grade;

    if(grade == 'S')
    {
        cout << "Superior" << endl;
    }
    else if(grade == 'A')
    {
        cout << "Excellent" << endl;
    }
    else if(grade == 'B')
    {
        cout << "Good" << endl;
    }
    else if(grade == 'C')
    {
        cout << "Usually" << endl;
    }
    else if(grade == 'D')
    {
        cout << "Effort" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }

    return 0;
}