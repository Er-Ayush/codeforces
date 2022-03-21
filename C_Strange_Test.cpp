#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}
void solve();

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();

return 0;
}
void solve(){
    ll k,n;cin>>k>>n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
        int least=arr[0]+k;
        int min_ele=INT_MAX;
        for(int i=1;i<n;i++){
           int sec=arr[i]+k;
           int aa=sec-least;
           min_ele=min(min_ele,aa);
        //    cout<<min_ele<<"\n";
        }
        for(int i=1;i<n;i++){
            
           int sub=arr[i]-k;
           if(sub>0){
           int bb=least-sub;
           cout<<"bb"<<" "<<bb<<"\n";
           min_ele=min(min_ele,bb);
           cout<<min_ele<<"\n";
           }
        }
        // cout<<min_ele<<"\n";
}