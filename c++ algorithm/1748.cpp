#include <iostream>
#include <cmath>
using namespace std;
int n;
int digit(int a){
	int cnt=0;
	while(a>0){
		a/=10;
		cnt++;
	}
	return cnt;
}
int main()
{
	cin>>n;
	int i;
	unsigned long long int cnt=0;
	if(n/10==0) cout<<n<<endl;
	else{
		int d = digit(n);
		unsigned long long sum=0;
		for(i=0;i<=d-2;i++){
			sum+=(9*pow(10,i)*(i+1));
		}
		long long cnt = 0;
		for (int i = 1 * pow(10, d - 1); ; i++) {
			cnt++;
			if (n == i) {
				cout << sum + (cnt * d) << endl;
				break;
			}
		}	
	}
}
