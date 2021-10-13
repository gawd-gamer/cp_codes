#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int long long
int mod = 1e9 + 7;
const int N = 1000005;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    int arr[N];
    for (int i = 0; i < N; i++)
        arr[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }
    for (int i = 1; i < N; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int i = 1; i < N; i++)
    {
        if (arr[i] >= k)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    int pre[N];
    pre[0] = 0;
    for (int i = 1; i < N; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
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
