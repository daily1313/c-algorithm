#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int i,j,h;
	int num[101];
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	int sum=0;
	int result=0;
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(h=j+1;h<n;h++){
				sum = num[i]+num[j]+num[h];
				
				if(sum>result && sum<=m){
					result = sum;		
				}
			}
		}
	}
	cout<<result<<endl;
	
}
