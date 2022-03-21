#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll sum = 0, pp = (n / m);
    if ((m / b) >= a)
    {
        // cout<<"hello";
        cout << n * a;
    }
    else
    {
        if (n > m)
        {
            while (pp--)
            {
                sum += b;
            }
            int rem = n % m;
            sum += rem * a;
            cout << sum << "\n";
        }
        else{
             cout << n * a;
        }
    }
    return 0;
}