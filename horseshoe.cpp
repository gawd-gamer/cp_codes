#include<stdio.h>
#include<iostream>

using namespace std;

int distinct(long long int arr[]){
	int j,count=1;
	for(int i=1;i<4;i++){
		for(j=0;j<i;j++){
		if(arr[j]==arr[i])
			break;
		}
		if(i==j)
		count++;
	}
	return count;
}

int main()
{
	long long int arr[4];
	for(int i=0;i<4;i++){
		cin>>arr[i];
	}

	int a = 4 - (distinct(arr));
	cout<<a;
}