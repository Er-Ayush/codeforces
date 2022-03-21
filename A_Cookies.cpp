#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;cin>>n;
ll arr[n];
ll even=0,odd=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0) even++;
    else odd++;
}
ll ans=even;
if(odd%2!=0) cout<<"1";
else
cout<<ans;

return 0;
}