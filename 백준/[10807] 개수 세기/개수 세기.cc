#include <iostream>

using namespace std;

int main()
{
    int N{0}, num[101]{0}, v{0}, result{0};
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    cin >> v;
    
    for(int i = 0; i < N; i++)
    {
        if(num[i] == v)
            result++;
    }
    
    cout << result << endl;

    
    return 0;
}