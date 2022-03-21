#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define whatis(x) cerr << #x << " is " << x << endl
#define RYOIKI_TENKai ios_base::sync_with_stdio(false), cin.tie(NULL)
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &t : a)
        cin >> t;

    int e(0), o(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            e++;
        else
            o++;
    }
    if (o == 0)
    {
        no;
        return;
    }
    for (int i = 1; i <= o; i += 2)
    {
        if (i > x)
            break;

        if (x - i <= e)
        {
            yes;
            return;
        }
    }
    no;
}
signed main()
{
    RYOIKI_TENKai;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}