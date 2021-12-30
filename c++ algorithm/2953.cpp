#include <iostream>
using namespace std;

int main(){
	int i;
	int a[5],b[5],c[5],d[5],e[5];
	int s1=0;
	int s2=0;
	int s3=0;
	int s4=0;
	int s5=0;
	
	for(i=0;i<4;i++){
		cin>>a[i];
		s1+=a[i];
	}
	for(i=0;i<4;i++){
		cin>>b[i];
		s2+=b[i];
	}
	for(i=0;i<4;i++){
		cin>>c[i];
		s3+=c[i];
	}
	for(i=0;i<4;i++){
		cin>>d[i];
		s4+=d[i];
	}
	for(i=0;i<4;i++){
		cin>>e[i];
		s5+=e[i];
	}
	int max;
	int number;
	if(s1>s2 && s1>s3 && s1> s4 && s1>s5){
		max = s1;
		number=1;
	}
	else if(s2>s1 && s2>s3 && s2> s4 && s2>s5){
		max = s2;
		number=2;
	}
	else if(s3>s1 && s3>s2 && s3> s4 && s3>s5){
		max = s3;
		number=3;
	}
	else if(s4>s1 && s4>s2 && s4> s3 && s4>s5){
		max = s4;
		number=4;
	}
	else if(s5>s1 && s5>s2 && s5> s3 && s5>s4){
		max = s5;
		number=5;
	}
	else return 0;
	cout<<number<<' '<<max<<endl;
	
}
