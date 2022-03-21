// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int maxx(ll a,ll b){ return a>b?a:b;}
// void solve();

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--){
// solve();
// }
// return 0;
// }
void solve(){
ll a,b,c,p,q,r;cin>>a>>b>>c>>p>>q>>r;
ll total=p+q+r;
ll votes=a+b+c;
if((p+b+c)>(total)/2) {cout<<"YES"<<"\n";return;}
if((a+q+c)>(total)/2) {cout<<"YES"<<"\n";return;}
if((a+b+r)>(total)/2) {cout<<"YES"<<"\n";return;}
cout<<"NO"<<"\n";
}
#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;cin>>t;
    while(t--){

      vector<int> v1, v2;
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    if(accumulate(v1.begin(),v1.end(),0)>accumulate(v2.begin(),v2.end(),0)/2.0000000 ){
        cout<<"YES"<<endl;
        continue;
    }
    
    int mx = *max_element(v2.begin(), v2.end());
    int i = std::max_element(v2.begin(), v2.end()) - v2.begin();
    v1[i] = mx;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    int s = accumulate(v1.begin(),v1.end(),0);
        int x = accumulate(v2.begin(),v2.end(),0);
    double y = x/2.00000000;  
    // cout<<y<<endl;
    if(s>y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  

    }
}