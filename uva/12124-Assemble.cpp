#include<bits/stdc++.h>
using namespace std;

int const x = 1000005;
int n, money;
map<string, vector<pair<int, int>>> mp;

bool check(int q){
	int sum = 0;
	map<string, vector<pair<int, int>>>::iterator it;
	for(it = mp.begin(); it != mp.end(); ++it){
		int Min = x;
		for(int i = 0; i < it->second.size(); i++){
			if(it->second[i].second >= q && it->second[i].first < Min) Min = it->second[i].first;
		}
		if(Min == x) return false;
		sum += Min;
	}
	if(sum <= money) return true;
	else return false;
}


int main(){
	int test;
	cin >> test;
	while(test--){
		cin >> n >> money;
		mp.clear();
		string component, type;
		int price, quality, left = 0, right = 0;
		for(int i = 0; i < n; i++){
			cin >> component >> type >> price >> quality;
			mp[component].push_back({price, quality});
			right = max(right, quality);
		}
		int ans;
		while(left < right){
			int mid = left+(right-left+1)/2;
            if(check(mid)) left = mid;	
            else right = mid-1; 
		}
		
		cout << left << endl;
	}
}

