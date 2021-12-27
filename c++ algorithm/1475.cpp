#include <iostream>
#include <cstring>
using namespace std;
int main(){
		char num[8];
		int count1=1;
		int count2=0;
		int i=0,j=1;
		cin>>num;
		int length = strlen(num);
			do{
			if(num[j] == num[i] && num[j] != '9' && num[j] != '6' && num[i] != '9' && num[i] != '6'){
				count1++;
			}
			else if(num[j] == num[i] || num[j] == '9' || num[j] == '6' ){
				count2++;
				if(count2 == 2){
					count1++;
					count2=0;
				}
			}
			if(j<length){
			j++;
			}	
			if(j==length-1){
			i++;
			}
			
		}while(j<length);
		
	cout<<count1<<endl;
	
	
}
