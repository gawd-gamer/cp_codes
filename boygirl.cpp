#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int distinct(string arr,int l){
	int j,count=1;
	for(int i=1;i<l;i++){
		for(j=0;j<i;j++){
		if(arr[j]==arr[i])
			break;
		}
		if(i==j)
		count++;
	}
	return count;
}

int main(){

	string str;
	cin>>str;
	int length=str.length();

	int terms=distinct(str,length);
	if(terms%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}	