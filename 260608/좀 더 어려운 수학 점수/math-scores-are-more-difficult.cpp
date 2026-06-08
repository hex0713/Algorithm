#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A[2]{0};
    int B[2]{0};

    cin >> A[0] >> A[1];
    cin >> B[0] >> B[1];

    if(A[0] == B[0])
    {
        if(A[1] > B[1])
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }

    }
    else if(A[0] > B[0])
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }

    return 0;
}