#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int num,tmp;
    vector<int> n;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> tmp;
        n.push_back(tmp);
    }
    sort(n.begin(),n.end());
    for(int i = 0; i < num; i++)
        cout << n[i] << '\n';
    }

