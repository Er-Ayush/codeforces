#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
set<int> st;
ll n;cin>>n;
for (ll i = 0; i < n; i++)
{
    int x;cin>>x;
    st.insert(x);
}
ll m;cin>>m;
for (ll i = 0; i < m; i++)
{
    int x;cin>>x;
    st.insert(x);
}
ll len=0;
for (auto it = st.begin(); it!=st.end(); ++it)
{
    len++;
}
if(len==t) cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";

return 0;
}