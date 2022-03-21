#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;cin>>n;
vector<ll> v;
for (ll i = 0; i < n; i++)
{
    ll x;cin>>x;
    v.push_back(x);
}
float sum=0.0;
for (ll i = 0; i < n; i++)
{
    double divide=(double)v[i]/100;
    sum+=divide;
}
double ans=(double)sum/v.size();
double finalans=ans*100;
cout<<fixed<<setprecision(12)<<finalans<<"\n";

return 0;
}