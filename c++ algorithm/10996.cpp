#include <iostream>
using namespace std;
int main(){
	int i,k,n,j;
	cin>>n;
	for(i=0;i<2*n;i++){
		if(i%2==0){
		for(k=0;k<n;k++){
			if(k%2==0){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
			cout<<endl;
		}
		else{
		for(j=0;j<n;j++){
			if(j%2==0){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
		}
	}
}
