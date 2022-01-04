#include <iostream>
using namespace std;
int digit(int n)
{
	int sum = n;
	while(n){
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
int main()
{
	int num;
	int i;
	cin>>num;
	for(i=1;i<num;i++){
		int sum = digit(i);
		if(sum==num){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"0"<<endl;
	
}
