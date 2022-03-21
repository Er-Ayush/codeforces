#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;cin>>n;
int len=12;
int arr[len]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int p,ct=0;
for (int  i = 0; i < len; i++)
{
  if(n%arr[i]==0){
      p=arr[i];
      ct=1;
      break;
  }   
}
if(ct==0) cout<<"NO"<<"\n";
else{
    if(p>n) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}

return 0;
}