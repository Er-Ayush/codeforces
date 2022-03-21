#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

void solve();
#define debug(x) cerr<<#x<<" "<<x<<" "endl;
void c_p_c()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

#define poora(v)         v.begin(),v.end()
#define ff              first
#define cy              cout<<"YES"<<"\n";
#define cn              cout<<"NO"<<"\n";
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
#define res(t)          for(int i=0;i<t;i++)
#define resi(s,e)          for(int i=s;i<e;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int32_t main()
{
c_p_c();
solve();
return 0;
}

void solve(){
    int d=1;
    int n;cin>>n;
    vi v1,v2,v3;
    res(n){
        int x;cin>>x;
        v1.pb(x);
    }
    sort(poora(v1));
    res(n-1){
        int x;cin>>x;
        v2.pb(x);
    }
    sort(poora(v2));
    res(n-2){
        int x;cin>>x;
        v3.pb(x);
    }
    sort(poora(v3));
   
   resi(0,v2.size()){
      if(v2[i]!=v1[i]){
           cout<<v1[i]<<"\n";
           d=0;
           break;
       }
   }
   if(d) cout<<v1[n-1]<<"\n";
d=1;
  resi(0,v3.size()){
       if(v3[i]!=v2[i]){
           cout<<v2[i]<<"\n";
           d=0;
           break;
       }
   }
   if(d) cout<<v2[n-2];

}