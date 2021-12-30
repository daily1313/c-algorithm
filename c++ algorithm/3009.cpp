#include <iostream>
using namespace std;

int main(){
	int x[3],y[3];
	int i;
	int num;
	int sumx1=0;
	int sumy1=0;
	for(i=0;i<3;i++){
		cin>>x[i]>>y[i];
		sumx1+=x[i];
		sumy1+=y[i];
		
	}
	int sumx = 0;
	for(i=1;i<3;i++){
		if(x[i] == x[i-1]){
			continue;
		}
		else if(x[i] != x[i-1]){
			sumx = 2*(x[i]+x[i-1]);
			break;
		}
	}
	int sumy=0;
	for(i=1;i<3;i++){
		if(y[i] == y[i-1]){
			continue;
		}
		else if(y[i] != y[i-1]){
			sumy = 2*(y[i]+y[i-1]);
			break;
		}
	}
	cout<<sumx-sumx1<<' '<<sumy-sumy1<<endl;
}
