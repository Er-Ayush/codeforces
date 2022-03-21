#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a, ll b) { return a > b ? a : b; }
void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n==1) {
        cout<<"YES"<<"\n";
    }
    if(n==2){
        if(s[0]!=s[1]){
            cout<<"YES"<<"\n";
        } 
        else cout<<"NO"<<"\n";
    }
    else if(n>2){
    cout<<"NO"<<"\n";
    }
    
}