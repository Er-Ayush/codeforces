#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " " << x << "\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int a=10,b=20;
    // debug(a);
    // debug(b);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    while (k--)
    {
    for(int i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            char a=s[i];
            s[i]=s[i+1];
            s[i+1]=a;
            i++;
        }
    }
    }
    cout<<s;
}
