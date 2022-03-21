#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b;cin>>a>>b;
int left=max(a,b)-min(a,b);
int ans=left/2;
cout<<min(a,b)<<" "<<ans;

return 0;
}