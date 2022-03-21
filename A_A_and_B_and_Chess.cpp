#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

void solve();
#define debug(x) cout<<#x<<" "<<x<<" "<<endl;
void c_p_c()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

#define poora(v)         v.begin(),v.end()
#define ff              first
#define ss              second
#define int             long long
#define cy              cout<<"YES"<<" ";
#define cn              cout<<"NO"<<" ";
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vvi             vector<vector<int>>
#define vvs             vector<vector<string>>
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
    int white=0,black=0;
vvs v[8];
res(8){
    for(int j=0;j<8;j++){
        string s;cin>>s;
        v[i].push_back(s);
        if(s==".") continue;
        else if(v[i][j]=="Q") white+=9;
        else if(v[i][j]=='R') white+= 5;
        else if(v[i][j]=='B') white+= 3;
        else if(v[i][j]=='N') white+= 3;
        else if(v[i][j]=='P') white+= 1;
        else if(v[i][j]=='r') black+=9 ;
        else if(v[i][j]=='b') black+=5 ;
        else if(v[i][j]=='n') black+=3 ;
        else if(v[i][j]=='p') black+=3 ;
        else if(v[i][j]=='k') black+=1 ;
    }
}
debug(white);
if(white==black) cout<<"Draw"<<"\n";
else if(white>black) cout<<"White"<<"\n";
else cout<<"NO"<<"\n";

}