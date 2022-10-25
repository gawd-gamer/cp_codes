/*   Coded by- _i_ujjwal_srivastava
     Contest- 
     Platform- 
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
  map<int,int>m;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){
    for(int j=1;j<=30;j++){
      int p=v[i]%2;
      if(p==1) m[j]++;
      v[i]/=2;
    }
  }
  int gcd=0;
  for(int i=1;i<=30;i++){
    gcd=__gcd(gcd,m[i]);
  }
  for(int i=1;i<=n;i++){
    if(gcd%i==0) cout<<i<<" ";
  }
  cout<<endl;
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
