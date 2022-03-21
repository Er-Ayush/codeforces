#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;cin>>n;
long long int arr[10]={1,2,6,24,120,720,5040,40320,362880,3628800};
cout<<arr[n-1]<<"\n";
}
return 0;
}