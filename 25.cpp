#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int a;cin>>a;
int n=pow(2,a),c=1;
cout<<"1 ";
for(int i=1;i<a;i++){
   cout<<i<<" ";
   c+=i;
}
cout<<(n-c)<<endl;
}
return 0;
}