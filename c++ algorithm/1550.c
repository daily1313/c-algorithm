#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m>n){
		return 0;
	}
	int i,j;
	
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			cout<<i<<' '<<j<<endl;
		}
	}
}

