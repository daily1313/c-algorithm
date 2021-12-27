#include <iostream>
using namespace std;

int main(){
	int n,i,j,k,m;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<n;i++){
		for(k=0;k<n-i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}
