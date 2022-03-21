#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int minn=0,maxx=0;
int cmin=0,cmax=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]==*min_element(arr,arr+n)  && cmin==0) {cmin=1;minn=i+1;}
    if(arr[i]==*max_element(arr,arr+n)  && cmax==0) {cmax=1;maxx=i+1;}
}
// if(maxx>minn) {
//     cout<<(maxx-1)+(n-minn)-1;
// }
// else{
//     cout<<(maxx-1)+(n-minn);
// }
cout<<minn<<"\n";
cout<<maxx<<"\n";

return 0;
}