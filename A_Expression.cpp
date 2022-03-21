#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,c;
cin>>a;
cin>>b;
cin>>c;
vector<ll> v;
v.push_back(a);
v.push_back(b);
v.push_back(c);
sort(v.begin(),v.end());
ll maxx=v[2];
ll sec=max((v[0]+v[1]),v[0]*v[1]);
if(a==1 && b==1 && c==1) cout<<"3";
else{
    if(maxx!=b)
cout<<maxx*sec;
else{
    cout<<v[0]*(v[1]+v[2]);
}

}
return 0;
}