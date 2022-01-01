#include <iostream>
using namespace std;
int get_integer(){
	int value;
	cin>>value;
	return value;
}
long long int fact(int a)
{
	int i;
	long long int result=1;
	for(i=1;i<=a;i++){
		result*=i;
	}
	return result;
}
long long int combi(int n,int m)
{
	return fact(n) / (fact(m) * fact(n-m));
}

int main(){
	int n,m;
	n = get_integer();
	m = get_integer();
	if(n<5 || n>100 || m<5 || m>100 || n<m){
		return 0;
	}
	int result = combi(n,m);
	cout<<combi(n,m)<<endl;
	
}
