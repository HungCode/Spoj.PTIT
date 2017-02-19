#include <iostream>
#include <math.h>
using namespace std;
void chan_le(){
	long long int k,n;
	do{
		cin>>n>>k;
	}
	while(n<1 || n>pow(10,12) || k>n || k<1);
	if(n%2==0){
		if(k<=n/2) cout<<(2*k-1);
		else cout<<(2*k-n);
	}
	if(n%2!=0){
		if(k<=n/2+1) cout<<(2*k-1);
		else cout<<(2*k-n-1);
	}
}
main(){
	chan_le();
}
