#include<bits/stdc++.h>
using namespace std;
#define int long long 

// .................................................................................................................................................................................................................................................................
// Simple Segment Tree;  for max query;

void build(vector<int>&v,vector<int>&tree,int tidx,int s,int e){
  // Base Case;
  if(s==e){
    tree[tidx]=v[s];
    return;
  }
  
  int mid=(s+e)/2;
  // Left Child;
  build(v,tree,2*tidx,s,mid);
  // Righ Child;
  build(v,tree,2*tidx+1,mid+1,e);
  
  tree[tidx]=max(tree[2*tidx],tree[2*tidx+1]);
}

void update(vector<int>&v,vector<int>&tree,int tidx,int s,int e,int idx,int val){
  if(s==e){
    tree[tidx]=val;
    v[idx]=val;
    return;
  }
  
  int mid=(s+e)/2;
  
  if(idx<=mid){
    update(v,tree,2*tidx,s,mid,idx,val);
  }
  else{
    update(v,tree,2*tidx+1,mid+1,e,idx,val);
  }
  
  tree[tidx]=max(tree[2*tidx],tree[2*tidx+1]);  
}

int query(vector<int>&tree,int tidx,int s,int e,int l,int r){
  if(s>r or e<l){
    return 0;
  }
  else if(s>=l and e<=r){
    return tree[tidx];
  }
  
  int mid=(s+e)/2;
  
  int a1=query(tree,2*tidx,s,mid,l,r);
  int a2=query(tree,2*tidx+1,mid+1,e,l,r);
  
  return max(a1,a2);
}

int32_t main(){
  
  int n;
  std::vector<int> v(n);
  vector<int>tree(4*n);
  
  vector<pair<int,int>>segtree(4*n);
  
}
