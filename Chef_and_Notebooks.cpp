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
ll x,y,n,k;
vector<pair<int,int>> vp;
int ct=0;
while(n--){
ll  num,pri;
cin>>num>>pri;
vp.push_back({num,pri});
}
ll left=x-y;
// sort(vp.begin(), vp.end());
for (int i = 0; i < n; i++)
{
    if((vp[i].first>=left) && (vp[i].second<=k)){
            cout<<"LuckyChef"<<"\n";
            return;
    }
}
cout<<"UnluckyChef"<<"\n";
return;
}