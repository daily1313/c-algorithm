#include <iostream>
#include <algorithm>
using namespace std;
int b[1000];
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b,b+5);
	for(i=0;i<n;i++){
		cout<<b[i]<<' ';
	}
	cout<<endl;
	
}
