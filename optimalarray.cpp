#include<bits/stdc++.h>
using namespace std;

#define int long long 

int arr[1000100];
int n,k;

bool check(int x){
    int lastleft =0;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(lastleft>=arr[i]){
            lastleft -= arr[i];
        }
        else{
            cnt++;
            lastleft = x-arr[i];
        }
    }
    if(cnt<=k)
        return 1;
    else
        return 0;
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        cin>>n>>k;

        int low = 0 , high = 0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            low = max(low,arr[i]);
            high += arr[i];
        }

        int ans=0;

        while(low<=high){

            int mid = (low+high)/2 ; 

            if(check(mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }

        cout<<ans<<"\n";


    }
