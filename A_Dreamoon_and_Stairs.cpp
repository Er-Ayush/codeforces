#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve();

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

solve();

return 0;
}
void solve(){
    ll n,m;cin>>n>>m;
    if(n<m) {
        cout<<"-1"<<"\n";return;
    }
    ll moves=(n+1)/2;
    while(n>0){
        if(moves%m==0) break;
        n-=2;
        moves+=1;

    }
    cout<<moves<<"\n";
    return;

}