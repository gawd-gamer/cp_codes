#include<iostream>
#include<stdio.h>
using namespace std;

long long int lucky(long long int n){
	int t,z=0;
	while(n!=0)
    {
            t=n%10;
            n=n/10;

            if(t==4 || t==7)
            z++;
    }
    if((z/10)==0)
    {
	    if(z==4 || z==7)
	    	cout<<"YES";
	    else
	    cout<<"NO";
	}
	else 
		lucky(z);
}

int main(){
	long long int x;

	cin>>x;
	lucky(x);

    cout<<endl;

}