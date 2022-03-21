#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int a=s.size();
int arr[(a+1)/2]={0};
for(int i=0;i<a;i+=2){
arr[i/2]=s[i];
}
sort(arr,arr+a);
for (int i = 0; i < (a+1)/2; i++)
{
    cout<<arr[i]<<" ";
}



return 0;
}