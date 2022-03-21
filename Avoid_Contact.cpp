#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}
void solve();

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--){
solve();
}
return 0;
}
void solve(){
int x,y;cin>>x>>y;
ll left=x-y;
if(y==0) {cout<<"x"<<"\n";return;}
ll ans=y+(y-1);
if(left==1){
ans+=2;
}
else{
    ans+=left;
    ans+=1;
}
cout<<ans<<"\n";
}