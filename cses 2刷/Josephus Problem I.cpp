#include<bits/stdc++.h>
using namespace std;

set<int> child_set;
int main(){
	int child_number;
	cin >> child_number;
	for(int i = 1; i <= child_number; i++){
		child_set.insert(i);
	} 
	auto iter = child_set.begin();
	while(!child_set.empty()){
		if(++iter == child_set.end()) iter = child_set.begin();
		cout << *iter << " ";
		iter = child_set.erase(iter);
		if(iter == child_set.end()) iter = child_set.begin();
	}
} 
