#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;cin>>n;
int x,y,z;
int sx=0,sy=0,sz=0;
while(n--){
cin>>x>>y>>z;
sx+=x;
sy+=y;
sz+=z;
}
if(sx==0 && sy==0 && sz==0) cout<<"YES";
else cout<<"NO"<<"\n";

return 0;
}