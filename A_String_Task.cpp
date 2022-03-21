#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s2;
    cin >> s;

    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O'&& s[i] != 'U' && s[i] != 'Y'){
          s2+='.';
          s2+=tolower(s[i]);
        }
           
    }
    cout<<s2;
  
    return 0;
}