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
    pair<int,int> arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = 0;
    }
    for(int i = 0; i < m; i++){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        arr[l].second++;
        if(r+1 < n)
            arr[r+1].second--;
    }
    for(int i = 1; i < n; i++){
        arr[i].second += arr[i-1].second;
    }
    sort(arr, arr+n);
    int check[n];
    check[0] = arr[0].second;
    for(int i = 1; i < n; i++){
        arr[i].second += arr[i - 1].second;
        check[i] = arr[i].second;
    }
    
    pair<int,int> ans[q];
    for(int i = 0; i < q; i++){
        cin >> ans[i].first;
        ans[i].second = 0;
    }
    for(int i = 0; i < q; i++){
        int x = ans[i].first;
        int y = lower_bound(check, check+n, x) - check;
        if(y == n)
            ans[i].second = -1;
        else
            ans[i].second = arr[y].first;
        cout << ans[i].second << " ";
    }
    cout << "\n";

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    //solve();
}
