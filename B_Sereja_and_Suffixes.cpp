#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a, ll b) { return a > b ? a : b; }
void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
void solve()
{
    ll n, m;cin>>n>>m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll hash[n];
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        for (int j = i; j < n; j++)
        {
            s.insert(arr[j]);
        }
        hash[i] = s.size();
    }

    while (m--)
    {
        ll l;
        cin >> l;
        // cout<<"ayush"<<"\n";
        cout <<hash[l-1] << "\n";
    }
}