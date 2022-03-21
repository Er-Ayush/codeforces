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
int n,k;cin>>n>>k;
string s;cin>>s;
ll flag=0,ans=0;
for(int i=0;i<n;i++){
    if(s[i]!=s[n-i-1]){
        flag=1;
        break;
    }
}
if(k==0){
    cout<<"1"<<"\n";
    return;
}
if(flag==0){
    ans=1;
}
else ans=2;
cout<<ans<<"\n";
}