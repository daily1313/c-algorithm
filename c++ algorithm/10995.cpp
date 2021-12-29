#include <iostream>
using namespace std;

int main()
{
	int i,k,n,j;
	cin>>n;
	
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<2*n-1;j++){
				if(j%2==0){
					cout<<"*";
				}
				else if(j%2==1){
					cout<<" ";
				}
			}
			cout<<endl;
		}
		if(i%2==1){
			for(j=0;j<2*n;j++){
				if(j%2==1){
					cout<<"*";
				}
				else if(j%2==0){
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
}
