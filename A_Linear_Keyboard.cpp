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
        string first;
        cin >> first;
        string second;
        cin >> second;
        int p=0;
        int count = 0;
        for (int i = 1; i < second.size(); i++)
        {
            
            p = (first.find(second[i]) - first.find(second[i - 1]));
            count+=abs(p);
        }
        cout << count << "\n";
    }
    return 0;
}