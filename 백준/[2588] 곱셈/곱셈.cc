#include <iostream>

using namespace std;

int main()
{
    int A{0}, B{0};
    cin >> A >> B;
	
	// (3) 의 값은 B 의 일의자리와 A 의 값을 곱한 값
	cout << (B % 10) * A << endl;
	// (2) 의 값은 B 의 십의자리와 A 의 값을 곱한 값
	cout << (B / 10 % 10) * A << endl;
	// (1) 의 값은 B 의 백의자리와 A 의 값을 곱한 값
	cout << (B / 100) * A << endl;
	// 최종 값
	cout << A * B << endl;
    return 0;
}