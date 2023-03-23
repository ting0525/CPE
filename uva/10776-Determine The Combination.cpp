#include<bits/stdc++.h>
using namespace std;

string str;
int len;

void dfs(vector<char> ans, int start){
	if(ans.size() == len){
		for(char i : ans) cout << i;
		cout << endl;
		return ;
	}
	
	else{
		for(int i = start; i < str.size();){
			char tmp = str[i];
			ans.push_back(str[i]);
			dfs(ans, i+1);
			ans.pop_back();
			while(str[i] == tmp) i++;
		}
	}
	return ;
}

int main(){
	while(cin >> str >> len){
		sort(str.begin(), str.end());
		vector<char> ans;
		dfs(ans, 0);
	}
}

