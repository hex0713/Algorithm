#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    float number[2];

    cin >> number[0] >> number[1];

    float High = 1.0f;
    float Middle = 0.5f;

    if(number[0] >= High && number[1] >= High)
    {
        cout << "High" << endl;
    }
    else if(number[0] >= Middle && number[1] >= Middle)
    {
        cout << "Middle" << endl;
    }
    else
    {
        cout << "Low" << endl;
    }

    return 0;
}