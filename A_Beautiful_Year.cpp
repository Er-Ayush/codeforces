#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxx(ll a, ll b) { return a > b ? a : b; }

void solve();
bool diff(int n);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  void solve();
  return 0;
}
void solve()
{
  int n;
  cin >> n;
  cout<<"1";
  while (true)
  {
    if (diff(n))
    {
      cout << n << "\n";
      return;
    }
    else
      n++;
  }
}
bool diff(int n)
{
  int d1, d2, d3, d4;
  d4 = n % 10;
  n /= 10;
  d3 = n % 10;
  n /= 10;
  d2 = n % 10;
  n /= 10;
  d1 = n % 10;
  int arr[4] = {d1, d2, d3, d4};
  sort(arr, arr + 4);
  for(int i=0;i<4;i++)
  {
    if (arr[i] == arr[i + 1])
    {
      return false;
    }
  }
  return true;
}