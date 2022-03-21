#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        int l = arr[2];
        if(a==0 && b==0 && c==0){
            cout<<"1 1 1"<<endl;
        }
        else{

        if(a==l) cout<<"0";
        else cout<<l-a+1;
        cout<<" ";
        if(b==l) cout<<"0";
        else cout<<l-b+1;

        cout<<" ";
        if(c==l) cout<<"0";
        else cout<<l-c+1;

        cout<<endl;
        }
     
    }
    return 0;
}