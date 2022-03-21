#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
string s;
cin>>s;
string room="0000000000";
for(int i=0;i<n;i++){
    if(s[i]=='L'){
       for(int i=0;i<=9;i++){
           if(room[i]=='0') room[i]='1';
           break;
       }
    }
    else if(s[i]=='R'){
       for(int i=9;i>=0;i--){
          if(room[i]=='0') room[i]='1';
           break;
       }
    }
    else {
     room[s[i]-'0']='0';
    }
}
for (int i = 0; i <10; i++)
{
    cout<<room[i];
}



return 0;
}