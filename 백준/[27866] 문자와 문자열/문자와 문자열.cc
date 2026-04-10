#include <iostream>

using namespace std;

int main()
{	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	// 단어 S 와 정수 i 가 주어졌을 때, S의 i번쨰 글자를 출력하는 프로그램을 작성하시오.
	char word[1001]{0};
	
	int i{0};
	cin >> word;
	cin >> i;
	
	cout << word[i - 1] << "\n";
	
    return 0;
}