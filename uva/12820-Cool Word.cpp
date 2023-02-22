#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, Case = 0;
	while(cin >> t){
		int count = 0;
		while(t--){
			string str = "";
			cin >> str;
			if(str.size() == 1) continue;
			vector<int> ch(30);
			for(int i = 0; i < str.size(); i++){
				ch[str[i]-'a']++;
			}
			sort(ch.begin(), ch.end(), greater<int>());
			/*
			for(int i = 0; i < ch.size(); i++){
				cout << ch[i] << " ";
			}
			*/
			int previous = ch[0];
			bool test_only = true;
			for(int i = 1; i < ch.size(); i++){
				if(ch[i] != 0 && ch[i] == previous){
					test_only = false;
					//cout << "!!!" << t << endl;
					break;
				}
				previous = ch[i];
			}
			if(test_only == true) count++;
			
		}
		printf("Case %d: %d\n", ++Case, count);
	}
} 
