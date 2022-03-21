#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int repeating;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        
            if(arr[0]==arr[1])
            repeating=arr[0];
            else if (arr[1]==arr[2])
            {
                repeating=arr[1];
            }
            else if (arr[2]==arr[3])
            {
                repeating=arr[2];
            }
            
        // cout<<"repeating number is :"<<repeating<<endl;
          for (int i = 0; i < n; i++)
          {
               if (arr[i]!=repeating)
               {
                   cout<<i+1<<endl;
                   break;
               }
               
          }
          

    }
    return 0;
}