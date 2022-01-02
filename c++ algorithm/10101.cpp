#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a<0 || a> 180 || b<0 || b>180 || c<0 || c>180){
		return 0;
	}
	if(a+b+c==180){
		if(a==60 && b== 60 && c==60){
		cout<<"Equilateral"<<endl;
		}
		else if(a==b && a!=c){
		cout<<"lsosceles"<<endl;
		}
		else if(b==c && b!=a){
		cout<<"lsosceles"<<endl;
		}
		else if(c==a && c!=b){
		cout<<"lsosceles"<<endl;
		}
		else{
		cout<<"Scalene"<<endl;
		}
	}
	else{
		cout<<"Error"<<endl;
	}
}
