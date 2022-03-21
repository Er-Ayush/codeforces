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
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m=*max_element(arr,arr+n);
int mi=*min_element(arr,arr+n);
cout<<m-mi<<"\n";

}