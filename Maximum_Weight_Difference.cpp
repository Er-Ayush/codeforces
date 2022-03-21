#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// int maxx(ll a, ll b) { return a > b ? a : b; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll a = 0, b = 0;
        for (int i = 0; i < k; i++)
        {
            a += arr[i];
        }
        for (int i = k; i < n; i++)
        {
            b += arr[i];
        }
        cout << (b-a) << "\n";
    }
    return 0;
}