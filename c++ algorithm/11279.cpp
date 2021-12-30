#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	priority_queue<int,vector<int>,greater<int> > q; 
	int n;
	cin>>n;
	int i;
	int num;
	for(i=0;i<n;i++){
		cin>>num;
		if(num>0){
			q.push(num);
		}
		else if(num<=0){
			if(!q.empty()){
				cout<<q.top()<<'\n';
				q.pop();
			}
			else{
				cout<<"0"<<'\n';
			}
		}
		
	}
}
