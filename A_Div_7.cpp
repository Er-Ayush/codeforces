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
    if (n % 7 == 0)
    {
        cout << n << "\n";
    }
    else
    {
        if (n <= 99)
        {
            int x = n / 10;
            x = x * 10;
            for (int i = x; i < x + 10; i++)
            {
                if (i % 7 == 0)
                {
                    cout << i << "\n";
                    return;
                }
            }
        }
        else
        {
            int x = n / 100;
            x = x * 100;
            int xx = n - x;
            xx = xx / 10;
            xx = xx * 10;
            x = x + xx;
            for (int i = x; i < x + 10; i++)
            {
                if (i % 7 == 0)
                {
                    cout << i << "\n";
                    return;
                }
            }
        }
    }
}