#include <iostream>
using namespace std;

int main()
{
   string N;
   int B{ 0 };
   int result{ 0 };
   
   cin >> N >> B;

   
   for (int i = 0; i < N.length(); i++)
   {
      int multi = 1;
      for (int j = 0; j < N.length() - 1 - i; j++)
      {
         multi *= B;
      }

      if (N[i] >= 'A')
      {
         result += (int)(N[i] - 'A' + 10) * multi;
      }
      else
      {
         result += (int)(N[i] - '0') * multi;
      }
   }

   cout << result << "\n";

   return 0;
}