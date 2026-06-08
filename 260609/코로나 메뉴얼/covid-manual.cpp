#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char illness{'\0'};
    int grade{0};
    int count{0};

    for(int i = 0; i <3; i++)
    {
        cin >> illness >> grade;

        if(illness == 'Y' && grade >= 37)
        {
            count++;
        }
    }

    if(count >= 2)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}