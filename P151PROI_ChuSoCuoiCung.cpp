#include <iostream>
using namespace std;

main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		while(x>=10){
			int t=0;
			while(x>0){
				t+=x%10;
				x=x/10;
			}
			x=t;
		}
		cout<<x<<endl;
	}
	
}
