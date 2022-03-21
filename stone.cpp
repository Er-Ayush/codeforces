#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getMin(ll arr[], ll n);
int getMax(ll arr[], ll n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n >= 2)
        {
            ll a[n];
            int middle = floor(n / 2);

            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            ll min = getMin(a, n);
            ll max = getMax(a, n);
            int maxindex = 0, minindex = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == max)
                    maxindex = i;
                if (a[i] == min)
                    minindex = i;
            }

            ll ct = 0;
            ll check = 0;
            for (int i = 0; i < n; i++)
            {
                if (((maxindex >= middle) && (minindex <= middle)) || ((maxindex <= middle) && (minindex >= middle)))
                {
                    if (ct >= 2)
                        break;

                    if (a[i] == min || a[i] == max)
                    {
                        ct++;
                        check++;
                    }
                    else
                        check++;
                    if (ct >= 2)
                        break;
                    if (a[n - i] == min || a[n - i] == max)
                    {
                        ct++;
                        check++;
                    }
                    else
                        check++;
                }

                else if ((maxindex <= middle) && (minindex <= middle))
                {
                    if (ct >= 2)
                        break;

                    if (a[i] == min || a[i] == max)
                    {
                        ct++;
                        check++;
                    }
                }
                else if ((maxindex >= middle) && (minindex >= middle))
                {
                    if (ct >= 2)
                        break;

                    if (a[n - i] == min || a[n - i] == max)
                    {
                        ct++;
                        check++;
                    }
                }
            }

            cout << check << endl;
        }
    }
    return 0;
}

int getMin(ll arr[], ll n)
{
    return *min_element(arr, arr + n);
}

int getMax(ll arr[], ll n)
{
    return *max_element(arr, arr + n);
}