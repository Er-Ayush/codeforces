#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        int res = 0;
        if (x % 2 == 0 && y % 2 == 0)
        {
            res = 0;
        }
        else if (__gcd(x, y) != 1)
        {
            res = 0;
        }

        else if ((__gcd(x, y + 1) > 1 || __gcd(x + 1, y) > 1))
        {
            res = 1;
        }

        else
            res = 2;

        cout << res << endl;
    }
    return 0;
}