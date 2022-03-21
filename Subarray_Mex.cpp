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
        ll n, k, x;
        cin >> n >> k >> x;
        ll ct = 0;
        if (x > k)
            cout << "-1"
                 << "\n";
        else
        {
            ct++;
            for (int i = 0; i < n; i++)
            {
            if (ct == x) ct=0;
            cout<<ct<<" "; 
            ct++;
            }
            cout<<"\n";
        }
    }
    return 0;
}