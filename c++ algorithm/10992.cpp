#include <iostream>
using namespace std;

int main(){
	int a[4],b[4];
	int sum[4]={0};
	int first[4];
	int i;
	
	for(i=0;i<4;i++){
		cin>>a[i]>>b[i];
		
	sum[0] = b[0]-a[0];
	}
	for(i=0;i<3;i++){
		first[i+1] = (b[i+1]-a[i+1]);
		sum[i+1]= sum[i] + first[i+1];
	}
	int max = sum[0];
	for(i=1;i<4;i++){
		if(sum[i]>max){
			max = sum[i];
		}
	}
	cout<<max<<endl;
}
		
		
	
