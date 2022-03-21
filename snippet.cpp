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

#define ff              first
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
#define printarr(arr,n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";} cout<<"\n";
#define printvec(v)     for(int i=0;i<v.size();i++){cout<<v[i]<<" ";} cout<<"\n";
#define w(t)            int t; cin>>t; while(t--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int32_t main()
{
c_p_c();
w(t) solve();
return 0;
}
void solve(){
vi v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
printvec(v);
}