#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	string a;
	
	cin>>a;
	long long int up=0,low=0;

	long long int l=a.length();

	for(int i=0;i<l;i++){
		if(a[i]<'a')
			up++;
		else 
			low++;
	}

	if(up>low){
		for(int i=0;i<l;i++){
			if(a[i]>='a')
				a[i]=a[i]-32;
		}
	}
	else if(up<=low){
		for(int i=0;i<l;i++){
			if(a[i]<'a')
				a[i]=a[i]+32;
		}
	}

	cout<<a;
}	