#include<bits/stdc++.h>
using namespace std;

int a, b;
int main(){
	while(cin >> a >> b && (a || b)){
		set<int> alice, betty, same;
		for(int i = 0; i < a; i++){
			int tmp;
			cin >> tmp;
			alice.insert(tmp);
			same.insert(tmp);	
		}
		for(int i = 0; i < b; i++){
			int tmp;
			cin >> tmp;
			betty.insert(tmp);
			same.insert(tmp);	
		} 
		cout << min(same.size()-alice.size(), same.size()-betty.size()) << endl;
	} 
} 
