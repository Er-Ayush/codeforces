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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 != 0)
    {
        cout << "NO"
             << "\n";
        return;
    }

    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;    
    }
    // if (!flag)
	// 	cout << "NO";
    // else{
    //     cout<<"YES"<<"\n";
	// 	for (int i = 0; i < 26; i++)
	// 		for (int j = 0; j < freq[i]; j++)
	// 			cout << char('a' + i);
    // }    
    // cout<<"\n";
    for (int i = 0; i < 26; i++){
       if(freq[i]>(n/2)){
           cout<<"NO"<<"\n";
           return;
       }
    }
    cout<<"YES"<<"\n";
    sort(s.begin(),s.end());
    
    ll ct=n/2;
    for (int i = n/2; i < n; i++)
    {
        if(s[n/2]==s[i]){
            ct++;
        }
    }
    ll till=ct-n/2;
    for (int i = 0; i < n/2; i++)
    {
        cout<<s[i];
    }
    for (int i = ct; i < n; i++)
    {
        cout<<s[i];
    }
    string left=s.substr(n/2,ct);
    cout<<left<<"\n";
    
    
}