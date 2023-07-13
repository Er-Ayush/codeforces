#include <bits/stdc++.h>  // This will work only for g++ compiler. 
typedef long long ll;
using namespace std;
#define pb push_back
#define fast   ios::sync_with_stdio(false);cin.tie(0);cout.precision(10);cout << fixed;
#define M 1000000007

//-----------------------------------------------------------------------------------------------------------------

string sv,bv;
ll p;
ll dp[20][2][2][200]; //b1->sv b2->bv
ll dfs(ll i,bool b1,bool b2,ll sum)
{
    if(sum<0 || sum>9*(p-i))
        return 0;
    if(i==p)
        return sum==0;
    if(dp[i][b1][b2][sum]!=-1)
        return dp[i][b1][b2][sum];
    ll ans=0;
    for(auto j='0';j<='9';j++)
    {
        if(!b1&&j<sv[i]) continue;
        if(!b2&&j>bv[i]) continue;
        ans+=dfs(i+1,b1||j>sv[i],b2||j<bv[i],sum-(j-'0'));
    }
    return dp[i][b1][b2][sum]=ans;
}
int main()
{   
    fast
    ll t;
    t=1; //only 1 test case
    while(t--)
    {   
        ll s,b;
        cin>>s>>b;
        while(s)
        {
            sv.pb(s%10 +'0');
            s=s/10;
        }
        while(b)
        {
            bv.pb(b%10 + '0');
            b=b/10;
        }
        while(sv.size()!=bv.size())
            sv.pb('0');
        reverse(sv.begin(),sv.end());
        reverse(bv.begin(),bv.end());
        //cout<<sv<<" "<<bv;
        ll fans=-1,fsum=0;
        memset(dp,-1,sizeof(dp));
        p=bv.size();
        for(ll i=0;i<=9*bv.size();i++)
        {
            ll ans=dfs(0,0,0,i);
            if(ans>fans)
            {
                fans=ans;
                fsum=1;
            }
            else if(ans==fans)
                fsum++;
        }
        cout<<fsum<<endl<<fans;
    }
	return 0;
}