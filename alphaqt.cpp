#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define int long long
int mod = 1e9 + 7;
const int N = 200010;

void solve()
{
    int n,q;
    cin >> n >> q;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(i > 1)
            arr[i] = (arr[i] + arr[i-1])%mod;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << (((arr[r] - arr[l-1])%mod)+mod)%mod << "\n";
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
