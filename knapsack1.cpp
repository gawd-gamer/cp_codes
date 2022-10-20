#include<bits/stdc++.h>
using namespace std;

#define int long long

int n,w;
int wt[110],vl[110];

int dp[110][100100];

int rec(int level, int bud){
	//pruning
	if(bud>w)
		return 0;
	//basecase
	if(level==n)
		return 0;

	// cache
	if(dp[level][bud]!=-1)
		return dp[level][bud];

	//transition

	//dont take
	int ans = rec(level+1,bud);
	//take
	if(bud+wt[level]<=w){
		ans = max(ans,vl[level]+rec(level+1,bud+wt[level]));
	}

	//save return
	return dp[level][bud] = ans;
}

void solve(){
	cin>>n>>w;

	for(int i=0;i<n;i++){
		cin>>wt[i]>>vl[i];
	}

	memset(dp,-1,sizeof(dp));

	cout<<rec(0,0)<<"\n";
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
}