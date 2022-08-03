#include <bits/stdc++.h>
using namespace std;

const int N = 10e5;
vector<int> v[N];
bool vis[N];
void dfs(int vertex)
{
    vis[vertex] = true;
    cout << vertex << "\n";
    for (int child : v[vertex])
    {
        cout << "par: " << vertex << " "
             << "child: " << child << "\n";
        if (vis[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(6);
    return 0;
}