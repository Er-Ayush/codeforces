#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,h,x;cin>>n>>h>>x;
ll arr[n],ct=0;
for (int i = 0; i < n; i++)
{
    ll sum=x;
    cin>>arr[i];
    sum+=arr[i];
    if(sum>=h) ct=1;
}
if(ct==1) cout<<"YES"<<"\n";
else cout<<"NO";

return 0;
}