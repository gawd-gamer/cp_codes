#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n,length;
	cin>>n;

	string str;

	for(int i=0;i<n;i++){
		cin>>str;
		length=str.length();
		
		if(length>10)
			cout<<str[0]<<length-2<<str[length-1]<<endl;
		else
			cout<<str<<endl;

	}
}