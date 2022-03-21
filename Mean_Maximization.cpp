#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n;cin>>n;
ll arr[n];
ll sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
sort(arr,arr+n);
float a=arr[0];
float b=(sum-a)/n-1;
ll ans=a+b;
   cout << setprecision(12)<<fixed;
   cout<<ans<<"\n";
}
return 0;
}