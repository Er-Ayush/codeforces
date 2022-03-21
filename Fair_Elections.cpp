#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;cin>>n>>m;
        vector<ll> a;
        vector<ll> b;
        for (int i = 1; i <= n; i++)
        {
            ll X;
            cin >> X;
            a.push_back(X);
        }
        for (int i = 1; i <= m; i++)
        {
            ll y;
            cin >> y;
            b.push_back(y);
        }
        //  for (auto i = a.begin(); i != a.end(); ++i)
        // cout << *i << " ";
        // for (int i = 0; i < a.size(); i++)
        //     cout << a[i] << " ";
        sort(a.begin,a.end);
        sort(b.begin,b.end);
        while(sum(a)<sum(b)){
            auto i=a.begin();
            auto qq=b.end()-1;
            swap(a,b);
            i++;qq--;
        }
    }
    return 0;
}
int sum(vector<int> &a){
    ll sum=0;
    for (int i = 0; i < a.size(); i++)
         sum+=a[i];
    return sum;     
}
int swap(vector<int> &a,vector<int> &b){
    
}