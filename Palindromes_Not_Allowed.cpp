#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;cin>>n;
string s="abcdefghijklmnopqrstuvwxyz";
int times=n%26;
for(int i=0;i<times;i++){
cout<<s;
}

}
return 0;
}