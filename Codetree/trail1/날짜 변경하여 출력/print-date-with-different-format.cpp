#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year{0}, month{0}, day{0};
    char c;

    cin >> year >> c >> month >> c >> day;

    cout << month << "-" << day << "-" << year;
    return 0;
}