#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	map<string, int> mp;
	while(t--){
		string country = "";
		char name[80];
		cin >> country;
		mp[country]++;
		cin.getline(name, 80);
	}
	for(auto i : mp){
		cout << i.first << " " << i.second << endl;
	}
}
