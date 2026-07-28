#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float realNumber{0};

    cin >> realNumber;

    if(realNumber >= 1.0)
    {
        cout << "High" << endl;
    }
    else if(realNumber >= 0.5)
    {
        cout << "Middle" << endl;
    }
    else
    {
        cout << "Low" << endl;
    }



    return 0;
}