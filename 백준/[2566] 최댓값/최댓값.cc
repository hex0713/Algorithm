#include <iostream>

using namespace std;

int main()
{

   cin.tie(NULL);
   ios::sync_with_stdio(false);
   
   int maxNum{0}, col{0}, row{0};
   int N{0};
   
   for(int i = 0; i < 9; i++)
   {
      for(int j = 0; j <9; j++)
      {
         cin >> N;
         if(N >= maxNum)
         {
            maxNum = N;
            col = i + 1;
            row = j + 1;
         }
      }
   }
   
   cout << maxNum << "\n" << col << " " << row << "\n";
   
}