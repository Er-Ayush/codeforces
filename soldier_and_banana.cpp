#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k,n,w;cin>>k>>n>>w;
int cost=0;
for (int i = 1; i <= w; i++)
{
    cost+=k*i;
}
if (n>=cost)
{
    cout<<"0";
}
else{
int borrow=cost-n;
cout<<borrow;
}
return 0;
}