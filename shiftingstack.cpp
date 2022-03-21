#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
 

    return 0;
}