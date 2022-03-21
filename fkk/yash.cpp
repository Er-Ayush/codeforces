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
        ll n;
        ll sum = 0;
        ll a[n], b[n];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (a[0] >= b[0])
            sum=1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] >= b[i])
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
}