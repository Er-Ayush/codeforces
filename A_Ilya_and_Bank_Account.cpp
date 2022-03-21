#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int minn(ll a,ll b){ return a<b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;cin>>n;
// ll mini=n;
if(n>=0) cout<<n;
else{
    // ll ans=-1*(n);
    ll l=n%10;
    n/=10;
    ll s=(n%10);
    n/=10;
    ll a=(-1)*l,b=(-1)*s;
    if(n==0) cout<<(-1)*minn(a,b);
    else
    cout<<n<<minn(a,b);
}
return 0;
}