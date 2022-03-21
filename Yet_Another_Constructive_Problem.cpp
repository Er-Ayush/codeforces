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
ll n;cin>>n;
ll first=n,second=0,third=n;
for(int i=0;i<31;i++){
    if((third &((ll)1<<i))==0){
        third=third | ((ll)1<<i);
        break;
    }
}
cout<<first<<" "<<second<<" "<<third<<"\n";
}