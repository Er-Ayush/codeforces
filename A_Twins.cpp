#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;cin>>n;
int arr[n];
int totalsum=0,sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    totalsum+=arr[i];
}
sort(arr, arr + n, greater<int>());
int ct=0;
for(int i=0;i<n;i++){
    if(sum>(totalsum-sum)) {break;}
    sum+=arr[i];
    ct++;
}
cout<<ct<<"\n";

return 0;
}