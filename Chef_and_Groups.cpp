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
        string s;
        cin >> s;
        ll ct = 0;
        ll n = s.size();
        ll i = 0;
        while (n--)
        {
            if (s[i] == '1')
            {
                while (s[i + 1] != '0')
                {
                    i++;
                }
                i++;
                ct++;
            }
            else
                i++;
        }
        cout << ct << "\n";
    }
    return 0;
}