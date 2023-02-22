#include<bits/stdc++.h>
using namespace std;

int main(){

	int time;
	string str;
	cin >> time;

	for(int Case = 1; Case <= time; Case){
		bool win_S = false;
		vector<int> v;

		cin >> str;
		for(auto i : str){
			v.push_back(i - '0');
			//cout << "i: " << i << endl;
		} 
		while(true){
			int sum = 0;
			for(auto i : v) sum += i;

			int i;
			for(i = 0; i < v.size(); ++i){
				if((sum-v[i])%3 == 0){	
					win_S ^= 1;
					v.erase(v.begin() + i);
					break;
				}
			}
			if(v.size() == 1){
				win_S ^= 1;
				break;
			}
			if(v.size() == i)	break;
			
		}

		cout << "Case " << Case++ << ": " << (win_S ? "S" : "T") << endl;
	}

}
