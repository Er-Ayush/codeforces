#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;cin>>s;
ll ct=0;
for (int i = 0; i < s.size(); i++)
{
    // if(s[i]<'!' && s[i]>'~') break;
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
         {
            ct=1;break;
        }
    }
}
if(ct==1) cout<<"YES";
else cout<<"NO";

return 0;
}