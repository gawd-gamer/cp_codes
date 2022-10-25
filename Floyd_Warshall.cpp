#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin >> v;
    vector<vector<int>> graph(v, vector<int>(v));
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            cin >> graph[i][j];
    vector<vector<int>> dp(v, vector<int>(v));
    dp = graph;
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dp[i][k] + dp[k][j] < dp[i][j])
                    dp[i][j] = dp[i][k] + dp[k][j];
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
}
