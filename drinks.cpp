#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

	double n;
	cin>>n;
	double p,sum=0;

	for(int i=0;i<n;i++)
	{
		cin>>p;
		sum=sum+p;
	}
	double ans=(sum/n);
	printf("%.12f",ans);
}