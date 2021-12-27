#include <iostream>
using namespace std;

int main(){
	int i,j,k,a,b,n;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		for(k=1;k<n-i;k++){
			cout<<" ";
		}
		for(a=1;a<n-i;a++){
			cout<<" ";
		}
		for(b=0;b<=i;b++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<n;i++){
		for(j=1;j<=n-i;j++){
			cout<<"*";
		}
		for(k=1;k<=i;k++){
			cout<<" ";
		}
		for(a=1;a<=i;a++){
			cout<<" ";
		}
		for(b=0;b<n-i;b++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
