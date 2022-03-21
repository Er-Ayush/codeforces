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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    ll ct = 0;
    ll p = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            ct = i + 1;
            break;
        }
            p++;
    }
    for (int j = 0; j < n; j++)
    {
        if (v[j] == ct)
        {
            reverse(v.begin()+p  , v.begin() + j+1 );
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}