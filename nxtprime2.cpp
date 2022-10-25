#include<stdio.h>
#include<iostream>

using namespace std;

int isprime(int n){
	for(int i=2;i<=(n/2);i++){
		if(n%i==0)
			return 0;
	}
		return 1;
}
int main(){
	int k=9;
	if(isprime(k))
		cout<<"HELLO";
	else 
		cout<<"SELL";
}