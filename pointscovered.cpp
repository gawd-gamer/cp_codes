#include<bits/stdc++.h>
using namespace std;

#define int long long 

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector <pair<int,int>> arr(n);
        set <int> set1;
        set <int> set2;

        int max,min,ans=0;

        for(int i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }

        max = arr[0].second;
        min = arr[0].first;
        ans += max - min + 1;

        cout<<"("<<ans<<")"<<" ";

        for(int i=1;i<n;i++){

            if(arr[i].first>=min && arr[i].second>max){
                    ans += arr[i].second - max;
                    max = arr[i].second;

                }
            else if(arr[i].first<min && arr[i].second<=max){
                    ans += min - arr[i].first;
                    min = arr[i].first;
                }
            else if(arr[i].first<min && arr[i].second>max){
                    ans += arr[i].second - max;
                    ans += min - arr[i].first;
                    max = arr[i].second;
                    min = arr[i].first;
                }
            else if((arr[i].first>max && arr[i].second>max)||( arr[i].second<min && arr[i].second<min)){
                    ans += arr[i].second - arr[i].first + 1;
                }

                cout<<"("<<ans<<")"<<" ";

        }

        cout<<ans<<"\n";




    }
    
}
