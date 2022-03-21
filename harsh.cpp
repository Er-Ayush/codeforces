#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}
int majorityElement(int arr[], int size);

int majorityElement(int arr[], int n)
{
    map<int,int> mp;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
       mp[arr[i]]++;
    }
    for(auto &it:mp){
        if(it.second>n/2){
            return (it.second);
        }
    }
   return -1;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n=5;
int arr[n]={1,3,7,3,3};

cout<<majorityElement(arr, n);

return 0;
}
