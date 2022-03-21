#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,h;
cin>>n>>h;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int ct=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>h)
    {
        ct=ct+2;
      
    }
    else if (arr[i]<=h)
    {
        ct=ct+1;
        
    }
    
}cout<<ct<<endl;

return 0;
}