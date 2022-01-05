#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int count = 0;
	int n;
	cin>>n;
	
	while(n){
		if(n%2==1){
			count++;
		}
		n/=2;
	}
	cout<<count<<endl;
}


