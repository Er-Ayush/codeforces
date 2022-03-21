#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int a,b,x;cin>>a>>b>>x;
long long int num=pow(a,b);
string p=to_string(num);

if(x==1){
string first=p.substr(0,1);
int len=p.size();
string last=p.substr(len-1,len);
cout<<first<<" "<<last;
}
else if(x==2){
string first=p.substr(0,2);
int len=p.size();
string last=p.substr(len-2,len);
cout<<first<<" "<<last;
}
else if(x==3){
string first=p.substr(0,3);
int len=p.size();
string last=p.substr(len-3,len);
cout<<first<<" "<<last;
}
else if(x==4){
string first=p.substr(0,4);
int len=p.size();
string last=p.substr(len-4,len);
cout<<first<<" "<<last;
}
else if(x==5){
string first=p.substr(0,5);
int len=p.size();
string last=p.substr(len-5,len);
cout<<first<<" "<<last;
}
else if(x==6){
string first=p.substr(0,6);
int len=p.size();
string last=p.substr(len-6,len);
cout<<first<<" "<<last;
}
else if(x==7){
string first=p.substr(0,7);
int len=p.size();
string last=p.substr(len-7,len);
cout<<first<<" "<<last;
}
return 0;
}