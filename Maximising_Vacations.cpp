#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a, ll b) { return a > b ? a : b; }

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
        string s;
        cin >> s;
        ll ct = 0;
        string holiday;
        for (int i = 0; i < k; i++)
        {
            holiday[i] = '0';
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 1)
            {
                string dummy = s;
                dummy[i] = '0';
                check(dummy);
            }
        }
    }
    return 0;
}
int check(string s)
{
    
}