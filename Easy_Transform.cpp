#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n;cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int countOdd = 0;
    for (int i = 0; i < n; i++)
 
        if (arr[i] % 2)
            countOdd++;
 
    if(countOdd>(n-countOdd)) cout<<(n-countOdd);
    else cout<<countOdd;
return 0;
}