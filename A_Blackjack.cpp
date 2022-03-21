#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;cin>>n;
if(n<=10) cout<<"0";
else if(n==11 || n==21) cout<<"4";
else if(n>21) cout<<"0";
else if(n==20) cout<<"15";
else if(n>11 && n<=19) cout<<"4";
return 0;
}