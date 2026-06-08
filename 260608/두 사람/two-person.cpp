#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int age{0};
    char gender{'\0'};
    bool isOne = false;

    for(int i = 0; i < 2; i++)
    {
        cin >> age >> gender;

        if(age >= 19 && gender == 'M')
            isOne = true;
    }

    cout << isOne << endl;
    
    return 0;
}