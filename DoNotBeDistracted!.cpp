// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int ct, frt, timer = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] != s[i + 1])
//             {
//                 ct = i + 2;
//                 frt = s[i];
//             }
//         }
//         for (int i = ct; i < n; i++)
//         {
//             if (s[i] == frt)
//             {
//                 timer = 1;
//             }
//         }
//         if (timer = 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl
//     }
//     return 0;
// }