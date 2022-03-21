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
        int n,b,m;
        cin >> n>>b>>m;
        int breakm = 0;
        while (n != 0)
        {
            if (n==1)
            {
               
                break;
            }
            
            if (n % 2 == 0)
            {
                n = n / 2;
                breakm++;
            }

            else if (n%2!=0 && n!=1)
            {
                 n = n- (n + 1) / 2;
                breakm++;
            }
            
            
        }

        int timebreak=breakm*b;
        int qtime=0;
        for (int i = 1; i <= breakm; i++)
        {
            qtime=m*i;
        }
        

    }
    return 0;
}