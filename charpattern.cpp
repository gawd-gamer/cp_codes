#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<26;j++){
			if(i==(j%8) || i+(j%8)==8){
				char a ='a'+j;
				cout<<a;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
