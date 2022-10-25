#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int long long
int mod = 1e9 + 7;
const int N = 1000005;

void solve()
{
    int n,q;
    cin >> n >> q;
    int arr[n+1];
    arr[0] = 0;
    int b[n+1];
    b[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        b[i] = (arr[i] * i)%mod;
    }
    for(int i = 1; i <= n; i++){
        arr[i] = (arr[i] + arr[i-1])%mod;
        b[i] = (b[i] + b[i-1])%mod;
    }
    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        int x = ((((b[r] - b[l-1]) + (1-l)*(arr[r] - arr[l-1]))%mod)+mod)%mod;
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
