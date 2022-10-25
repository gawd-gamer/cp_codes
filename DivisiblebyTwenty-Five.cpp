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
string s;
  cin>>s;
  int n=(int)s.length();
  int ans=0;
  if(s[0]=='0' or n==1){
    if(n==1 and (s[0]=='0' or s[0]=='_' or s[0]=='X')){
cout<<"1"<<endl;
      return 0;
    }
    cout<<0;
    return 0;
  }
  int flag1=0;
  for(char j='0';j<='9';j++){
    string s1=s;
    if(j=='0' and s[0]=='X') continue;
    for(int i=0;i<n;i++){
       if(s[i]=='X'){
         flag1++;
         s1[i]=j;
       }
    }
    string s2;
    s2.pb(s1[n-2]);
    s2.pb(s1[n-1]);
    
    if(s2[0]!='_' and s2[1]!='_'){
      if(s2=="25" or s2=="00" or s2=="75" or s2=="50"){
                  int flag=1;
        for(int i=0;i<n-2;i++){
          if(s1[i]=='_'){
            if(i==0) flag*=9;
            else flag*=10;
          }
        }
        ans+=flag;
      }
    }
    else if(s2[0]!='_' and s2[1]=='_'){
      if(s2[0]=='2' or s2[0]=='0' or s2[0]=='7' or s2[0]=='5'){
                  int flag=1;
        for(int i=0;i<n-2;i++){
          if(s1[i]=='_'){
            if(i==0) flag*=9;
            else flag*=10;
          }
        }
       ans+=flag;
      }
    }
    else if(s2[0]=='_' and s2[1]!='_'){
     if(s2[1]=='0' or s2[1]=='5'){
       if(n==2 and s2[1]=='0') ans++;
       else{
         int flag=1;
         flag*=2;
         for(int i=0;i<n-2;i++){
          if(s1[i]=='_'){
            if(i==0) flag*=9;
            else flag*=10;
          }
        }
       ans+=flag;
       }
     }
    }
    else{
      if(n==2) ans+=3;
      else{
        int flag=1;
        flag*=4;
         for(int i=0;i<n-2;i++){
          if(s1[i]=='_'){
            if(i==0) flag*=9;
            else flag*=10;
          }
        }
       ans+=flag;
      }
    }
    if(flag1==0) break;
  }
  cout<<ans<<endl;
return 0;
}
int32_t main(){
    spark
    int t=1;
    //test_cases
    while(t--){
        mywork();  
    }
    return 0;
}
