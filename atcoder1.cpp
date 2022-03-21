#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
string s;cin>>s;
ll x,y;
cin>>x>>y;
char temp=s[x];
s[x]=s[y];
s[y]=temp;
for (int i = 0; i < s.size(); i++)
{
    cout<<s[i];
}

}
return 0;
}