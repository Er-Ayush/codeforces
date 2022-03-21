#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int x[2],y[2],z[2];
cin>>x[0]>>x[1]>>x[2]>>y[0]>>y[1]>>y[2]>>z[0]>>z[1]>>z[2];
// cin>>y[0]>>y[1]>>y[2];
// cin>>z[0]>>z[1]>>z[2];
if ((x[0]+y[0]+z[0]==0) && (x[1]+y[1]+z[1]==0) && (x[2]+y[2]+z[2]==0) )
{
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
int k=x[0]+y[0]+z[0];
cout<<k;
cout<<"values of x are:"<<endl;
cout<<x[0]<<" "<<x[1]<<" "<<x[2];
cout<<y[0]<<" "<<y[1]<<" "<<y[2];
cout<<z[0]<<" "<<z[1]<<" "<<z[2];
return 0;
}

// 3
// 3 -1 7
// -5 2 -4
// 2 -1 -3