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
    ll n, k;
    cin >> n >> k;
    
    if (n == 1 && k == 1)
    {
        cout << "1"
             << "\n";
             return;
    }
    if(k<2 || k>n) {
        cout<<"-1"<<"\n";
        return;
    }

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        ll temp=arr[k-1];
        arr[k-1]=arr[n-1];
        arr[n-1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
    
}