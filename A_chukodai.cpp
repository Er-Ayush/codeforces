#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;cin>>s;
ll x,y;
cin>>x>>y;
char temp=s[x-1];
s[x-1]=s[y-1];
s[y-1]=temp;
for (int i = 0; i < s.size(); i++)
{
    cout<<s[i];
}


return 0;
}