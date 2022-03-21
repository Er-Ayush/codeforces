#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}
void solve();

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();

return 0;
}
void solve(){
ll n;cin>>n;
ll arr[n];
ll sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
ll p=(n*(n+1))/2;
if(p==sum) cout<<"YES"<<"\n";
else cout<<"NO"<<"\n";
}