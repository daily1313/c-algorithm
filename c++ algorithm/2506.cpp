#include <iostream>
using namespace std;

int main(){
	int n[101],i;
	int sum=0;
	int k;
	cin>>k;
	for(i=0;i<k;i++){
		cin>>n[i];
		if(n[i] != 0 && n[i] != 1){
			break;
		}
		if(i==0){
			sum+=n[i];
		}
		if(i>=1){
			if(n[i]>0 && n[i-1]>0){
				n[i] += n[i-1];
				sum+=n[i];
			}
			else{
				sum+=n[i];
			}
		}
	}
	cout<<sum<<endl;
}
