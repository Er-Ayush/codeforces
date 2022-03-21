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
int n;cin>>n;
string s;
cin>>s;
ll o=0,z=0;
for(int i=0;i<n;i++){
    if(s[i]=='1') o++;
    else if(s[i]=='0') z++;
}
if(n%2==0){
    if(o==z) {cout<<"YES"<<"\n";return;}
    else if(o%2==0 && z%2==0){
        cout<<"YES"<<"\n";
        return;
    }
    else{ cout<<"NO"<<"\n";return;}
}
cout<<"YES"<<"\n";
}