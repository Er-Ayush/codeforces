// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int maxx(ll a,ll b){ return a>b?a:b;}
// void solve();

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--){
// solve();
// }
// return 0;
// }
// void solve(){
// int n;cin>>n;
// vector<int> v1;
// vector<int> v2;
// for(int i=0;i<n;i++){
//     ll a;cin>>a;
//     v1.push_back(a);
//     v2.push_back(a);
// }
// sort(v1.begin(),v1.end());
// if(v1==v2) cout<<"NO"<<"\n";
// else if(v2[0]>=v2[n-1]){
//     cout<<"YES"<<"\n";
// }
// else cout<<"YES"<<"\n";

// }
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
int a,b,c,n;
cin>>a>>b>>c>>n;
int arr[109];
arr[0]=a;
arr[1]=b;
arr[2]=c;
for(int i=3;i<100;i++){
arr[i]=(arr[i-2]+arr[i-3]+arr[i-1]);
}
cout<<arr[n-1];
}