#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
        string s;cin>>s;
        string s2=s;
        int flag=1;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            char temp=s[i];
            if(s[i]==s2[i] || s[n-i-1]==s2[i]){
                continue;
            }
            else {
                cout<<"NO\n";
                flag=0;
                break;
            }

        }
        if(flag==1) cout<<"YES\n";
	}
	return 0;
}