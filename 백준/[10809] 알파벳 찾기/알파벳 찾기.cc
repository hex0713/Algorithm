#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string s;
	const int ALPHA_MAX = 26;
	const int ASCII_a = 97;
	int alphabet[ALPHA_MAX]{0};
	
	
	// a,b,c,d,e,
	// f,g,h,i,j,
	// k,l.m.n.o,
	// p,q,r,s,t,
	// u,v,w,x,y
	// z,
	
	// 초기화
	for(int i = 0; i < ALPHA_MAX; i++)
	{
		alphabet[i] = -1;
	}
	
	// 입력
	cin >> s;
	
	// 계산
	for(int i = 0; i < s.length(); i++)
	{
		// 처음 등장한 위치
		if(alphabet[int(s[i]) - ASCII_a] == -1)
			alphabet[int(s[i]) - ASCII_a] = i;
	}
	
	// 출력
	for(int i = 0; i < ALPHA_MAX; i++)
	{
		cout << alphabet[i] << " ";
	}
	cout << flush;
	
	return 0;
}