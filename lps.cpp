#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
        dp[i][i] = 1;
    for (int l = 1; l <= n - 1; l++)
    {
        for (int i = 1; i <= n - l; i++)
        {
            int j = i + l;
            if (s[i - 1] != s[j - 1])
            {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
            else
            {
                if (j == i + 1)
                    dp[i][j] = 2;
                else
                    dp[i][j] = 2 + dp[i + 1][j - 1];
            }
        }
    }
    cout << dp[1][n];
}
