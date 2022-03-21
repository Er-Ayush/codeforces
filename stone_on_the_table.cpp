#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, counter = 0;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n ; i++)
    {
        if (s[i] == s[i - 1])
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}