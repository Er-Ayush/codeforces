#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,k,t;
   cin >> n >> k ;
   t =(n+1)/2 ;
   if(k<=t)
   cout << 2*k-1 ;
   else
   cout << 2*(k-t) ;
}