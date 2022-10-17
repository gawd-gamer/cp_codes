#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n;
	int a[1000],b[1000];

	cin>>n;
	if(n<2){
		return 0;
	}
	int tram=0;
	int max=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		tram=tram-a[i];
		tram=tram+b[i];

		if(max<tram)
			max=tram;
	}
	cout<<max;

}