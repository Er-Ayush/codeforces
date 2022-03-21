#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
ll x,y,z;cin>>x>>y>>z;
cout<<(x)*(z-y)<<"\n";
}
return 0;
}