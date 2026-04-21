#include <iostream>

using namespace std;

int main()
{

   cin.tie(NULL);
   ios::sync_with_stdio(false);

   const int MAX_WORD = 5;
   const int MAX_ALPHABET = 15;
   string words[MAX_WORD];
   string verticalWords[MAX_ALPHABET];
   int i = 0;
   
   for(i = 0; i < MAX_WORD; i++)
   {
      cin >> words[i];
   }
   
   
   for(i = 0; i < MAX_WORD; i++)
   {
      for (int j = 0; j < words[i].length(); j++)
      {
         verticalWords[j] += words[i][j];
      }
   }

   for (i = 0; i < MAX_ALPHABET; i++)
   {
      cout << verticalWords[i];
   }
}