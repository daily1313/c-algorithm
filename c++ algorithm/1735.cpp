#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	
	cin>>a>>b;
	cin>>c>>d;
	int i;
	if(b>d){
		for(i=2;i<=b;i++){
			if((a*d+b*c) % i == 0 && (b*d)%i==0){
				cout<<(a*d+b*c) % i<<' '<<(b*d)%i<<endl;
				return 0;		
			}
			else{
				cout<<a*d+b*c<<' '<<b*d;
				return 0;
			}
		}
	}
	else if(b==d){
		for(i=2;i<=b;i++){
			if((a*d+b*c) % i == 0 && (b*d)%i==0){
				cout<<(a*d+b*c) / i<<' '<<(b*d)/i<<endl;
				return 0;		
			}
			else{
				cout<<a+c<<' '<<b;
				return 0;
			}
		}
	}
	else if(d>b){
		for(i=2;i<=d;i++){
			if((a*d+b*c) % i == 0 && (b*d) % i ==0){
				cout<<(a*d+b*c) % i<<' '<<(b*d) % i<<endl;
				return 0;		
			}
			else{
				cout<<a*d+b*c<<' '<<b*d;
				return 0;
			}
		}
	}
	
	
}

