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
  map<pair<int,int>,int>m1;
bool bfs(vector<vector<char>>&v,int n,int m){
  queue<pair<int,int>>qu;
  qu.push({n,m});

  m1[{n,m}]=1;
  while(not qu.empty()){
    pair<int,int>p=qu.front();
    int a=p.first,b=p.second;
    qu.pop();
    if((v[a+1][b]=='.' or v[a+1][b]=='G') and m1[{a+1,b}]==0) {qu.push({a+1,b});
                                                     m1[{a+1,b}]=1;         
                                                             }
    if((v[a][b+1]=='.' or v[a][b+1]=='G') and m1[{a,b+1}]==0) {qu.push({a,b+1});
                                                         m1[{a,b+1}]=1;     
                                                             }
    if((v[a][b-1]=='.' or v[a][b-1]=='G') and m1[{a,b-1}]==0) {qu.push({a,b-1});
                                                          m1[{a,b-1}]=1;    
                                                             }
    if((v[a-1][b]=='.' or v[a-1][b]=='G') and m1[{a-1,b}]==0) {qu.push({a-1,b});
                                                           m1[{a-1,b}]=1;   
                                                             }
  }
  return false;
}
int mywork(){
 // Now the pain with pleasure starts
int n,m;
cin>>n>>m;
vector<vector<char>>v(n+2,vector<char>(m+2,'0'));
  for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++){
     cin>>v[i][j];
   }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(v[i][j]=='B'){
        if(v[i+1][j]=='G' or v[i][j+1]=='G' or v[i-1][j]=='G' or v[i][j-1]=='G'){
          cout<<"No"<<endl;
          return 0;
        }
        if(v[i+1][j]!='B') v[i+1][j]='#';
        if(v[i][j+1]!='B') v[i][j+1]='#';
        if(v[i-1][j]!='B') v[i-1][j]='#';
        if(v[i][j-1]!='B') v[i][j-1]='#';
      }
    }
  }
  if(v[n][m]!='#') bfs(v,n,m);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(v[i][j]=='G'){
        if(m1[{i,j}]==0){
          cout<<"No"<<endl;
          return 0;
        }
        }
      }
    }
  cout<<"Yes"<<endl;
return 0;
}
int32_t main(){
    spark
    int t=1;
    test_cases
    while(t--){
      m1.clear();
        mywork();  
    }
    return 0;
}
