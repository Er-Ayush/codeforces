#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
// int maxx(ll a, ll b) { return a > b ? a : b; }
// void solve();

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
// void solve()
// {
//     string s;cin>>s;
//     ll one=0,zero=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='0') zero++;
//         else one++;
//     }
//     // if(one==zero){
//     //     cout<<"0"<<"\n";
//     //     return;
//     // }
//     if(one==zero){
//         if(s[0]=='0') zero--;
//         else one--;
//     }
//     cout<<min(one,zero)<<"\n";
// }
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=matrix.size();
        for(int i=0;i<l;i++){
            for(auto j=matrix[i].begin;j!=matrix[i].end();++j){
                if(matrix[i][j]==target){
                    return 1;
                } 
            }
        }
        return false;
    }
};

int main(){
    vector<vector<int>> matrix;
    int t;
    Solution sol;
    sol.searchMatrix(matrix,target);
}