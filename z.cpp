#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r1[5], r2[5], r3[5], r4[5], r5[5];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        cin >> r1[i];
        if (r1[i] == 1)
        {
            c = i+1;
            r = 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> r2[i];
        if (r2[i] == 1)
        {
            c = i+1;
            r = 2;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> r3[i];
        if (r3[i] == 1)
        {
            c = i+1;
            r = 3;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> r4[i];
        if (r4[i] == 1)
        {
            c = i+1;
            r = 4;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> r5[i];
        if (r5[i] == 1)
        {
            c = i+1;
            r = 5;
        }
    }

    int rd = abs(3 - r);
    int cd = abs(3 - c);
    cout << rd + cd << endl;

    return 0;
}