// Ohmm Ganeshaaye Namah
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

void solve();
#define debug(x) cout<<#x<<" "<<x<<endl;
void c_p_c()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

bool _isprime(int n)
{
if(n==1)return false;
if(n==2 || n==3)return true;
if(n%2==0 || n%3==0)return false;
for(int i=5;i*i<=(n);i=i+6){if(n%i==0 || n%(i+2)==0)return false;}
return true;
}
#define cinvec(v) for(int i=0;i<v.size();i++){int x;cin>>x;v.pb(x);}
#define poora(v)         v.begin(),v.end()
#define ff              first
#define ss              second
#define int             long long
#define cy              cout<<"YES"<<endl;
#define cn              cout<<"NO"<<endl;
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vs              vector<string>
#define vvi             vector<vector<int>>
#define vvs             vector<vector<string>>
#define loop(i,a,b)     for(int i=a;i<b;i++)
#define rloop(i,a,b)    for(int i=a;i>=b;i--)
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
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int32_t main()
{
c_p_c();
// w(t)
solve();
return 0;
}
void solve(){
int a,b,c,d;cin>>a>>b>>c>>d;
string s;cin>>s;
int ans=0;
loop(i,0,s.size()){
    if(s[i]=='1') ans+=a;
    else if(s[i]=='2') ans+=b;
    else if(s[i]=='3') ans+=c;
    else if(s[i]=='4') ans+=d;
}
cout<<ans;
}