#include <iostream>
using namespace std;

int main(){
	int i,j;
	int num[7];
	int cnt = 0;
	int sum=0;
	int min = 99;
	for(i=0;i<7;i++){
		cin>>num[i];
		if(num[i]%2==1){
			if(num[i]<min){
				min = num[i];
			}
			sum+=num[i];
			cnt++;
		}
	}
	if(cnt==0){
	
	cout<<"-1"<<endl;
	return 0;
}
	
	cout<<sum<<endl;
	cout<<min<<endl;
}
