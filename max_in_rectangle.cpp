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
    memset(arr, 0, sizeof(arr));
    
    for(int i = 0; i < q; i++){
        int x1,x2,y1,y2,c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        arr[x1][y1] += c;
        if(x2 < n && y2 < m)
            arr[x2+1][y2+1] += c;
        if(x2 < n)
            arr[x2+1][y1] -= c;
        if(y2 < m)
            arr[x1][y2+1] -= c;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= m; j++){
            arr[i][j] += arr[i][j-1];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            arr[j][i] += arr[j-1][i];
        }
    }
    int maxi = INT_MIN;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
                cnt = 1;
            }
            else if(arr[i][j] == maxi)
                cnt++;
        }
    }
    cout << maxi << " " << cnt << "\n";
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
