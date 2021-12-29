#include <iostream>
#include <cmath>
using namespace std;
void star(){
	cout<<"*";
}
void empty(){
	cout<<" ";
}
int main(){
	int i,j,k;
	int n;
	cin>>n;
	int num = pow(3,7);
	if(num % n != 0 || n==1 ||n==0){
		return 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i%3==1 && j%3==1){
				empty();
			}
			else if((i/3)%3==1 && (j/3)%3==1){
				empty();
			}
			else if((i/9)%3==1 && (j/9)%3==1){
				empty();
			}
			else if((i/27)%3==1 && (j/27)%3==1){
				empty();
			}
			else if((i/81)%3==1 && (j/81)%3==1){
				empty();
			}
			else if((i/243)%3==1 && (j/243)%3==1){
				empty();
			}
			else if((i/729)%3==1 && (j/729)%3==1){
				empty();
			}
			else if((i/2187)%3==1 && (j/2187)%3==1){
				empty();
			}
			else{
				star();
			}
		}
		cout<<endl;
	}	
}















