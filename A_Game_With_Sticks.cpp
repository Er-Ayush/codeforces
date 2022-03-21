#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;cin>>n>>m;
int inter=n*m;
int ct=0;
while(inter>0){
inter=inter-(n+m-1);
ct++;
n--;
m--;
}
if(ct %2!=0) cout<<"Akshat";
else cout<<"Malvika";
return 0;
}