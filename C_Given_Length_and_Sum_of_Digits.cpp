#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define pi 3.1415926536
#define mod 1000000007
#include <sstream>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

ll const N=2e5+5,P=1e9;

ll a[N],b[N];
map<ll,ll>mp,ans,last,add3;
vector<ll>adj[N],v;
set<ll>s,s2;
bool vis[N],color[N];





int main() {
    fast;
    int m, s;
    cin >> m >> s;
    int cnt = 0;
    string ans, ans2;
    if ((9 * m) < s || (s== 0 && m>1)) {
        cout << -1 << " " << -1;
        return 0;
    }
    while (1) {
        if (s >= 10) {
            s -= 9;
            ans += '9';
            ans2 += '9';
            cnt++;
        } else {
            if ((m - cnt) == 1) {
                int rem = s;
                ans += to_string(rem);
                ans2 += to_string(rem);
                break;
            } else {
                for (int i = 1; i < m - cnt; i++) {
                    if (i == 1) {
                        int rem = s - 1;
                        ans += to_string(rem);
                        ans2 += to_string(s);
                    } else {
                        ans += '0';
                        ans2 += '0';
                    }
                }
                    ans += '1';
                    ans2 += '0';
                    break;

            }
        }
    }
        for(int i=ans.size()-1;i>=0;i--)cout<<ans[i];
        cout<<" "<<ans2;
}



