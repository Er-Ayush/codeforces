#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod =1000000007;
 
void gothamcity(){
int n;
cin>>n;
set <pair<int,int> > s;
for(int i=1;i<n-1;i++){
     int x;
     cin>>x;
     s.insert({i,x});
}
int q;
cin>>q;
while(q--){
     int x,k;
     cin>>x>>k;
     int dis=0;
     auto it= s.lower_bound({x,0});
     //auto id= it->first;
     while(k>0 && it!=s.end()){
         if(it->second > k){
            
             s.insert({it->first,it->second-k});
             s.erase(it);
             k=0;
         }
         else{
             k-=(it->second);
 
             dis+=(it->(it->first - x));
             auto itr=it;
             it++;
             s.erase(itr);
         }
     }
     cout<<dis<<endl;
 
}
}
/******************************************************************/
signed main(){
ios::sync_with_stdio(false);
 
int tc=1;
//cin>>tc;
while(tc++) gothamcity();
}