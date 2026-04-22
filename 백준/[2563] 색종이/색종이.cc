#include <iostream>
using namespace std;

int main()
{
   // 흰 도화지 좌표
   bool whitePage[100][100]{ false };

   // 검은색 도화지 수량, 검은색 도화지 (x,y)좌표, 넓이
   int N{ 0 }, x{ 0 }, y{ 0 }, extent{ 0 };
   // 총 검은색 종이 갯수
   cin >> N;


   for (int i = 0; i < N; i++)
   {
      cin >> x >> y;
      for (int j = 0; j < 10; j++)
      {
         for (int k = 0; k < 10; k++)
         {
            if (whitePage[x + j][y + k])
               continue;

            whitePage[x + j][y + k] = true;
            extent++;
         }
         
      }
   }

   cout << extent << "\n";

   return 0;
}