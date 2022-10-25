#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>

#define int long long

using namespace std;

signed main(){

    int t;
    cin>>t;

    while(t--){

        string n;
        int a,b,pow=1,deci=0;
        cin>>n>>a>>b;
        int l = n.length();

        for(int i = l-1;i>=0;i--){

            int x;
            if(n[i]>='0' && n[i]<='9'){
                x = n[i] - '0';
            }
            else
                x = n[i] - 'A' + 10;
            deci += x*pow;
            pow *= a;

        }
        string p;
        while(deci){
            int x =  deci % b;
            char c;
            if(x>=0 && x<=9)
                c=x+'0';
            else
                c= x-10+'A';
            p += c;
            deci /= b;
        }

        reverse(p.begin(),p.end());
        cout<<p<<"\n";

        
    }
}
