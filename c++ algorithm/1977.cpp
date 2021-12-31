#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];
	int i;
	for(i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3);
	for(i=0;i<3;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	
}
