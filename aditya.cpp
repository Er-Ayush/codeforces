#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a;
cin>>a;
string b;
b=a;
for (int i = 0; i < a.size(); i++)
{
    
    for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '+')
            {
                b[i] = '-';
            }
            else if (a[i] == '-')
            {
                b[i] = '+';
            }
            else
            {
                b[i] = a[i];
            }
        }
    
}
cout<<b;

return 0;
}