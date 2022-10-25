#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int N = 2000100;

int mod = 1e9 + 7;

void add(int &a, int b) {
  a += b;
  if (a >= mod) 
    a -= mod;
}

void sub(int &a, int b) {
  a -= b;
  if (a < 0) 
    a += mod;
}

int mul(int a, int b) {
  return (int) ((a%mod) * (b%mod)) % mod;
}

int power(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b % 2) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b /= 2;
  }
  return res;
}

int fact[N];

void pre() {
    fact[0] = 1;
    for(int i = 1; i < N; i++)
        fact[i] = mul(fact[i - 1], i);
    return;
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    pre();

    while(t--){

        int n,m;
        cin>>n>>m;

        int ans = fact[n+m];
        ans = mul(ans,power(fact[n],mod-2));
        ans = mul(ans,power(fact[m],mod-2));

        cout<<ans<<"\n";

    }
    
}
