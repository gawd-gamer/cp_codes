#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    string a, b;
    cin >> a >> b;
    n = a.size();
    m = b.size();
    int in, de, re;
    cin >> in >> de >> re;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i <= n; i++)
        dp[i][0] = i * de;
    for (int j = 0; j <= m; j++)
        dp[0][j] = j * in;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
            {
                dp[i][j] = min(dp[i][j - 1] + in, min(dp[i - 1][j] + de, dp[i - 1][j - 1] + re));
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
}
