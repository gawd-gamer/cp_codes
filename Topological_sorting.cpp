#include <bits/stdc++.h>
using namespace std;
void dfs(int cur, vector<int> &visited, stack<int> &elements, vector<vector<int>> &adj)
{
    visited[cur] = 1;
    for (auto nb : adj[cur])
    {
        dfs(nb, visited, elements, adj);
    }
    elements.push(cur);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    stack<int> elements;
    vector<int> visited(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dfs(i, visited, elements, adj);
    }
    while (!elements.empty())
    {
        cout << elements.top() << " ";
        elements.pop();
    }
}