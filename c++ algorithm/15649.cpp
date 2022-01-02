#include <iostream>
using namespace std;
int gcd(int a,int b){
	if(a<b) return gcd(b,a);
	else if (a%b==0){
		return b;
	}
	else{
		return gcd(b,a%b);
	}
}
int main()
{
	int n,m,t;
	cin>>t;
	int i;
	int a,b;
	for(i=0;i<t;i++){
		cin>>a>>b;
		cout<<a*b/gcd(a,b)<<' '<<gcd(a,b)<<endl;
		}
	}
	

