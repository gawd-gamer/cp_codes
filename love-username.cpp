#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n,z=0;
	int a[1000];

	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max){
			max=a[i];
			z++;
		}
		if(a[i]<min){
			min=a[i];
			z++;
		}

	}
	cout<<z;
	return 0;
}