#include<stdio.h>
#include<iostream>

using namespace std;

int min(int *a,int *b){
	if(*a>*b)
		return *b;
	return *a;
}

int main(){

	int n,count=0;
	cin>>n;

	int l1=0,r1=0,r0=0,l0=0;

	int l[10000],r[10000];

	for(int i=0;i<n;i++){
		cin>>l[count]>>r[count];
		count++;
	}
	for(int i=0;i<count;i++){
		if(l[i]==1)
			l1++;
		else 
			l0++;
	}
	for(int i=0;i<count;i++){
		if(r[i]==1)
			r1++;
		else 
			r0++;
	}

	int ans = min(&l0,&l1)+min(&r0,&r1);
	cout<<ans;


}