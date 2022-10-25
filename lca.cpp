#include <bits/stdc++.h>
using namespace std;
void dfs(int cur, vector<vector<int>> &adj, vector<vector<int>> &ancestor, vector<int> &depth, int l, int par = -1)
{
    ancestor[cur][0] = par;
    for (int i = 1; i <= l; i++)
    {
        if (ancestor[cur][i - 1] == -1)
            ancestor[cur][i] = -1;
        else
            ancestor[cur][i] = ancestor[ancestor[cur][i - 1]][i - 1];
    }
    for (auto nb : adj[cur])
    {
        if (nb != par)
        {
            depth[nb] = depth[cur] + 1;
            dfs(nb, adj, ancestor, depth, l, cur);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
            int v;
            cin >> v;
            adj[i].push_back(v);
            adj[v].push_back(i);
        }
    }
    int l = ceil(log2(n));
    vector<vector<int>> ancestor(n, vector<int>(l + 1));
    vector<int> depth(n);
    dfs(0, adj, ancestor, depth, l);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=l;j++)
    //         cout<<ancestor[i][j]<<" ";
    //     cout<<"\n";
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        if (depth[u] < depth[v])
            swap(u, v);
        // cout<<depth[u]<<" "<<depth[v]<<"\n";
        int diff = depth[u] - depth[v];
        for (int i = l; i >= 0; i--)
        {
            if ((1 << i) <= diff)
            {
                u = ancestor[u][i];
                diff -= (1 << i);
            }
        }
        if (u == v)
        {
            cout << u << "\n";
            continue;
        }
        for (int i = l; i >= 0; i--)
        {
            if (ancestor[u][i] != ancestor[v][i])
            {
                u = ancestor[u][i];
                v = ancestor[v][i];
            }
        }
        cout << ancestor[u][0] << "\n";
    }
}
