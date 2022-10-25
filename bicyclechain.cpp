#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

	int n,m,arr1[10000],arr2[10000],max=0,count=0;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}

	cin>>m;

	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr2[i]%arr1[j]==0){
				if(max<arr2[i]/arr1[j]){
					max=arr2[i]/arr1[j];
					count=1;
				}
				else if(max==arr2[i]/arr1[j])
					count++;
			}

		}
		
	}
	cout<<count;

}