#include <iostream>
using namespace std;

int main(){
	int i,j;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
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
