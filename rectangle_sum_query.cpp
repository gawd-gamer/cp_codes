#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int long long
int mod = 1e9 + 7;
const int N = 1000005;

void solve()
{
    int n,m,q;
    cin >> n >> m >> q;
    int arr[n+1][m+1];
    memset(arr,0,sizeof(arr));
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= m; j++){
            arr[i][j] += arr[i][j - 1];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            arr[j][i] += arr[j-1][i];
        }
    }
    for(int i = 0; i < q; i++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x = (arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1]) % mod;
        if(x < 0)
            x += mod;
        cout << x << "\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    /*int t;
    cin >> t;
    while(t--){
        solve();
    }*/
    solve();
}
