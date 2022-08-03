// // Ohmm Ganeshaaye Namah
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// void solve();
// #define debug(x) cout << #x << " " << x << endl;
// void c_p_c()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
// }

// bool _isprime(int n)
// {
//     if (n == 1)
//         return false;
//     if (n == 2 || n == 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= (n); i = i + 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
// #define vari(n) \
//     int n;      \
//     cin >> n
// #define cinvec(v)    \
//     for (auto i : v) \
//     {                \
//         cin >> i;    \
//     }
// #define poora(v) v.begin(), v.end()
// #define ff first
// #define ss second
// #define int long long
// #define cy cout << "YES" << endl;
// #define cn cout << "NO" << endl;
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define vi vector<int>
// #define vs vector<string>
// #define vvi vector<vector<int>>
// #define vvs vector<vector<string>>
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define rloop(i, a, b) for (int i = a; i >= b; i--)
// #define mii map<int, int>
// #define pqb priority_queue<int>
// #define pqs priority_queue<int, vi, greater<int>>
// #define setbits(x) __builtin_popcountll(x)
// #define zrobits(x) __builtin_ctzll(x)
// #define mod 1000000007
// #define inf 1e18
// #define ps(x, y) fixed << setprecision(y) << x
// #define mk(arr, n, type) type *arr = new type[n];
// #define w(t)  \
//     int t;    \
//     cin >> t; \
//     while (t--)
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }

// int lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }

// int decimalToBinary(int N)
// {
//     int B_Number = 0;
//     int ctr = 0;
//     while (N != 0)
//     {
//         int temp = N % 2;
//         int c = pow(10, ctr);
//         B_Number += temp * c;
//         N /= 2;
//         ctr++;
//     }
//     return B_Number;
// }

// int isPalindrome(int num)
// {
//     int n, k, rev = 0;
//     n = num;
//     while (num != 0)
//     {
//         k = num % 10;
//         rev = (rev * 10) + k;
//         num = num / 10;
//     }
//     if (n == rev)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int maxSubArray(vector<int> &nums)
// {
//     int size = nums.size();
//     int max_ending_here = 0, max_so_far = INT_MIN;
//     int min_ending_here = 0, min_so_far = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] <= max_ending_here + nums[i])
//         {
//             max_ending_here += (nums[i]);
//         }
//         else
//         {
//             max_ending_here = (nums[i]);
//         }
//         if (max_ending_here > max_so_far)
//             max_so_far = max_ending_here;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] >= min_ending_here + nums[i])
//         {
//             min_ending_here += (nums[i]);
//         }
//         else
//         {
//             min_ending_here = (nums[i]);
//         }
//         if (min_ending_here < min_so_far)
//             min_so_far = min_ending_here;
//     }
//     return max(max_so_far, abs(min_so_far));
// }

// int factorial(int n)
// {
//     return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
// }

// int numberOfDigits(int x)
// {
//     int i = 0;
//     while (x)
//     {
//         x /= 10;
//         i++;
//     }
//     return i;
// }

// int digSum(int x)
// {
//     int res = 0;
//     while (x)
//     {
//         res += x % 10;
//         x /= 10;
//     }
//     return res;
// }

// int32_t main()
// {
//     c_p_c();
//     int tt = 0;
//     w(t)
//     {
//         tt++;
//         int n;
//         cin >> n;
//         vi v;
//         loop(i, 0, n)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         deque<int> dq;
//         loop(i, 0, n)
//         {
//             dq.push_back(v[i]);
//         }
//         // for (auto i : dq)
//         // {
//         //     cout << i << " ";
//         // }
//         // cout << "\n";
//         int ct = 0;
//         int temp = 0;
//         loop(i, 0, n)
//         {
//             int a = dq.front();
//             int b = dq.back();
//             // int temp=min(a,b);
//             if (a > temp && b < temp)
//             {
//                 ct++;
//                 temp = a;
//                 dq.pop_front();
//             }
//             else if (a < temp && b > temp)
//             {
//                 ct++;
//                 temp = b;
//                 dq.pop_back();
//             }
//             else if (a >= temp && b >= temp)
//             {
//                 if (a <= b)
//                 {

//                     ct++;
//                     temp = a;
//                     dq.pop_front();
//                 }
//                 else
//                 {
//                     ct++;
//                     temp = b;
//                     dq.pop_back();
//                 }
//             }
//             else break;
//         }
//         cout<<"Case #"<<tt<<": "<<ct<<"\n";
//     }
//     return 0;
// }
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
Merges two subarrays of arr[].
First subarray is arr[left_index..middle_index]
Second subarray is arr[middle_index+1..right_index]
**/
void merge(int arr[], int left_index, int middle_index, int right_index)
{
 int sz_left_arr = middle_index - left_index + 1;
 int sz_right_arr = right_index - middle_index;
 /* create temporary arrays */
 int left_arr[sz_left_arr], right_arr[sz_right_arr];
 /* Copy data to left_arr[] and right_arr[] */
 for (int i = 0; i < sz_left_arr; i++)
 left_arr[i] = arr[left_index + i];
 for (int j = 0; j < sz_right_arr; j++)
 right_arr[j] = arr[middle_index + 1 + j];
 int i, j, k;
 /* Merge the temp arrays back into arr[l..r]*/
 i = 0; /* starting index of left_arr */
 j = 0; /* starting index of right_arr */
 k = left_index; /* starting index of merged subarray */
 while (i < sz_left_arr && j < sz_right_arr) {
 if (left_arr[i] <= right_arr[j]) {
 arr[k] = left_arr[i];
 i++;
 }
 else {
 arr[k] = right_arr[j];
 j++;
 }
 k++;
 }
 /* Copy the remaining elements of left_arr[], if there
 are any */
 while (i < sz_left_arr) {
 arr[k] = left_arr[i];
 i++;
 k++;
 }
 /* Copy the remaining elements of right_arr[], if there
 are any */
 while (j < sz_right_arr) {
 arr[k] = right_arr[j];
 j++;
 k++;
 }
}
void merge_sort_func(int arr[], int left_index, int right_index)
{
 if (left_index < right_index) {
 int middle_index = (left_index + right_index) / 2;
 /*recursively sort first and second halves*/
 merge_sort_func(arr, left_index, middle_index);
 merge_sort_func(arr, middle_index + 1, right_index);
 merge(arr, left_index, middle_index, right_index);
 }
}
void print_array_func(int arr[], int size){
 for (int i = 0; i < size; i++)
 printf("%d ", arr[i]);
 printf("\n");
}
int main()
{
 clock_t t;
 t=clock();
 int size;
 printf("enter size of an array\n");
 scanf("%d",&size);
 int arr[size];
 srand(0); 
 for (int i = 0; i < size; i++) {
 arr[i] = rand();
 }
 
 printf("\nGiven array is \n");
 print_array_func(arr, size);
 merge_sort_func(arr, 0, size-1);
 t=clock()-t;
 double time_taken=((double)t)/CLOCKS_PER_SEC;
 printf("Sorted array is\n");
 print_array_func(arr, size);
 printf("Time taken is %.8lf seconds",time_taken);
 return 0;
}
