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
        ll k;
        cin >> k;
        if (k % 2 != 0)
        {
            while (k--)
            {
                cout << "1"<<" ";
            }
            cout<<"\n";
        }
        else{
            ll p=k-1;
           while (p--)
           {
               cout<<"2"<<" ";
           }
            cout<<"0"<<"\n";
        }
    }
    return 0;
}