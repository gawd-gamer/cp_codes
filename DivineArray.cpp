/*   Coded by- _i_ujjwal_srivastava
     Contest- 751(Div 2)
     Platform- Codeforces
*/
#include <bits/stdc++.h>
using namespace std;
#define spark ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
const int mod=1e9+7;
const int inf=1e18;
const long double pi=3.1415926535;
#define F first
#define S second
#define pb push_back
#define test_cases cin>>t;
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int mywork(){
 // Now the pain with pleasure starts
int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  vector<vector<int>>ans(2*n,vector<int>(n,0));
  ans[0]=v;
  vector<int>v1(n);
  int k=0;
  while(v1!=v){
    v1=v;k++;
    map<int,int>m;
    for(int i=0;i<n;i++){
      m[v[i]]++;
    }
    for(int i=0;i<n;i++) v[i]=m[v[i]];
    ans[k]=v;
  }
  int q;
  cin>>q;
  while(q--){
    int a,b;
    cin>>a>>b;
    a--;
    if(b<=k){
      cout<<ans[b][a]<<endl;
    }
    else cout<<v[a]<<endl;
  }
return 0;
}
int32_t main(){
    spark
    int t=1;
    test_cases
    while(t--){
        mywork();  
    }
    return 0;
}
