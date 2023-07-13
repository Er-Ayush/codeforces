#include<bits/stdc++.h>
using namespace std;

#define int             long long

int getPairsCount(int arr[], int n, int k);

int32_t main(){
    int n;cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i]=x;
    }
    cout<<getPairsCount(arr,n,k);
}

int getPairsCount(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
 
        int y = lower_bound(arr + i + 1, arr + n, x) - arr;
 
        int z = upper_bound(arr + i + 1, arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
}