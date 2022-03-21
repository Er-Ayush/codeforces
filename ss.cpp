#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int c1, c2;
      int maxe = 0;
      for (int i = 0; i < n / 2; i++)
      {
         c2 = i * 2;
         c1 = n - c2;
         int d=abs(c1-i);
         if (d>maxe)
         {
            maxe=d;
         }
         
      }
      cout<<maxe<<endl;
   }
   return 0;
}