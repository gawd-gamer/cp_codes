#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){

	int t;
	cin>>t;

	string str;
	getline(cin,str);
	
	while(t--){

		getline(cin,str);
		int x=str.length();

		for(int i=0;i<x;i++){
			
			if(str[i]>='A' && str[i]<='Z')
				str[i] += 32;

		}

		for(int j=0;j<26;j++){

			char letter = 'a'+j;
			int count =0;

			for(int i=0;i<x;i++){

				if(letter==str[i])
					count++;
			}

			cout<<count<<" ";

		}
		cout<<endl;
	}
}
