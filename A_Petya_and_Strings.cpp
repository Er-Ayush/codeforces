#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s1;cin>>s1;
string s2;cin>>s2;
int p=0;
for (int i = 0; i < s1.size(); i++)
{
    char a=tolower(s1[i]);
    char b=tolower(s2[i]);
    if(a<b) {p=1;cout<<"-1"<<"\n";break;}
    else if(a>b) {p=1;cout<<"1"<<"\n";break;}
    else continue;
}
if(p==0) cout<<"0"<<"\n";


return 0;
}