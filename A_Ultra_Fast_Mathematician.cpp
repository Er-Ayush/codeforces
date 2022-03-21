#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s1,s2;cin>>s1>>s2;
for (int i = 0; i < s1.size(); i++)
{
    int a=s1[i]-'0';
    int b=s2[i]-'0';
    cout<<(a^b);
}

return 0;
}