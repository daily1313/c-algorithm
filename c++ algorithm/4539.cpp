#include <iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int i;
	int n,a[5];
	int count=0;
	for(i=0;i<5;i++){
		cin>>a[i];
		if(a[i]==num) count++;		
	}
	cout<<count<<endl;
}
