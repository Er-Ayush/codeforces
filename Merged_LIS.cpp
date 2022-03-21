// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int lenOfLongIncSubArr(ll a[], int n);
// int lenOfLongIncSubArr1(ll b[], int m);

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
// ll n,m;cin>>n>>m;
// ll a[n],b[m];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// for(int i=0;i<m;i++){
//     cin>>b[i];
// }
// ll ma=0,mb=0;
// ma=lenOfLongIncSubArr(a, n);
// mb=lenOfLongIncSubArr1(b, m);
// cout<<ma+mb<<"\n";
// }
// return 0;
// }


// int lenOfLongIncSubArr(ll a[], int n){

//     int max = 1, len = 1;
     
//     // traverse the array from the 2nd element
//     for (int i=1; i<n; i++)
//     {
        
//         if (a[i] >= a[i-1])
//             len++;
//         else
//         {
           
//             if (max < len)   
//                 max = len;
           
//             len = 1;   
//         }   
//     }
     
//     if (max < len)
//         max = len;
//     return max;
// }

// int lenOfLongIncSubArr1(ll b[], int m){

//     int max = 1, len = 1;
     
//     // traverse the array from the 2nd element
//     for (int i=1; i<m; i++)
//     {
        
//         if (b[i] >= b[i-1])
//             len++;
//         else
//         {
           
//             if (max < len)   
//                 max = len;
           
//             len = 1;   
//         }   
//     }
     
//     if (max < len)
//         max = len;
//     return max;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lengthOfLIS(vector<ll>& a);

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,m;cin>>n>>m;
vector<int> a;
vector<int> b;
int p,q;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
ll ma,mb;
ma=lengthOfLIS(a);
mb=lengthOfLIS(b);
// cout<<ma<<" "<<mb<<"\n";
cout<<ma+mb<<"\n";
}
return 0;
}


ll lengthOfLIS(vector<ll> a)
{
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}