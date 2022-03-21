#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a,ll b){ return a>b?a:b;}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    vector<pair<int,int>> vp;
	    for(int i=0;i<n;i++){
	        int ct=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1) ct++;
	        }
	        vp.push_back({i,ct});
	    }
	     sort(vp.begin(), vp.end(), sortbysec);
         auto p=*max_element(vp.begin(), vp.end());
	    return vp[0].second;
	}

};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}