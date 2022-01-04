#include <iostream>
#include <utility>
using namespace std;



int main()
{
	int n;
	cin>>n;
	pair<int, int> *people = new pair<int, int> [50];
	
	int i,j;
	for(i=0;i<n;i++){
		cin>>people[i].first>>people[i].second;
	}
	for(i=0;i<n;i++){
		int rank=1;
		for(j=0;j<n;j++){
			if(people[i].first<people[j].first && people[i].second<people[j].second){
				rank++;
			}
		}
		cout<<rank<<' ';
	}
	
	
	
}
