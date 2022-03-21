#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
ll arr[t];

for(int i=0;i<t;i++){
    cin>>arr[i];
}
ll minn=arr[0],maxx=arr[0],ct=0;
for (int i = 1; i < t; i++)
{
 if(arr[i-1]<arr[i]){
     if(maxx==arr[i]) continue;
     maxx=max(maxx,arr[i]);
     if(arr[i]==maxx) {ct++;}
 }   
 if(arr[i-1]>arr[i]){
     minn=min(minn,arr[i]);
     if(arr[i]==minn) {ct++;}
 }   
}
cout<<ct<<"\n";
return 0;
}