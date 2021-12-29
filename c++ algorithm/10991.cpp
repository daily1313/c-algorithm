#include <iostream>
using namespace std;

int main(){
	int i,j;
	int n;
	int k;
	cin>>n;
	for(i=0;i<n;i++){
		if(i==n-1){
			for(k=1;k<2*n;k++){
				cout<<"*";
			}
			cout<<endl;
		}
		else{
			for(j=1;j<2*n;j++){
				if(j==n+i){
					cout<<"*";
					break;
				}
				else if(j==n-i){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
		
}
