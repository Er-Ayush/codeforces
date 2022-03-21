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
int n;cin>>n;
ll a[n],b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
for (int i = 0; i < n; i++)
{
    if(a[i]>b[i]){
        ll temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
ll p=*max_element(a,a+n);
ll q=*max_element(b,b+n);
cout<<p*q<<"\n";

}
return 0;
}