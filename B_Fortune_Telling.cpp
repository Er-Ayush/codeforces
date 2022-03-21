#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, kk;
        cin >> n >> kk;
        int ct = 0;
        string s;cin >> s;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                ct++;
            }
        }
        if (kk >= ct)
        {
            if ((kk - ct) % 2 == 0 || (s.size() % 2 != 0))
            {
                cout << "YES"<< "\n";
            }
            else
            {
                cout << "NO"<< "\n";
            }
        }
        else cout << "NO"<< "\n";
    }
    return 0;
}
