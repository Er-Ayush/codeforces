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
    int n;
    cin >> n;
    b (n == 2)
        cout <<"1"<<" "<<"0"<<"\n";
    else{
        ll v=log2(n-1);
        ll a=1<<v;
        for (int i = n-1; i >= a; i--)
        {
            cout<<i<<" ";
        }
        for (int i = 0; i <a ; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
        
    }    
}