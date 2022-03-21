#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll s,n;
cin>>s>>n;
vector<pair<int,int>> drag(n);
for (int i = 0; i < n; i++)
{
    int x,y;cin>>x>>y;
    drag[i].first=x;
    drag[i].second=y;
}
sort(drag.begin(),drag.end());
 

ll strength=s,ct=1;
for (ll i = 0; i < n; i++)
{
    if(strength<=drag[i].first){
        ct=0;break;
    }
    else{
        strength+=drag[i].second;
    }
}
if(ct==1) cout<<"YES"<<"\n";
else cout<<"NO"<<"\n";


return 0;
}