#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
ll p=0;
while(t--){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    p++;
    // cout<<"Case #"<<p<<": ";
    int a=0,b=0;;
    for (int i = 0; i < n; i++)
    {  cout<<arr[i]<<" :"<<a<<" ";
        if(arr[i]>b) a++,b++;
        cout<<a<<"\n ";
    }
    cout<<"\n";
    
}
return 0;
}