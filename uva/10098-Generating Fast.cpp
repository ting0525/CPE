#include<bits/stdc++.h>
using namespace std;

int len;
string str = "";
bool vis[1000];

void dfs(int n, string finish){
	if(n == len){
		cout << finish << endl;
	}
	else{
		char tail = '\0';
		for(int i = 0; i < len; i++){
			if(!vis[i] && str[i] != tail){
				vis[i] = 1;
				string new_finish = finish + str[i];
				tail = str[i];
				dfs(n+1, new_finish);
				vis[i] = 0;
			}
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> str;
		len = str.size();
		fill(vis, vis + len, 0);
		sort(str.begin(), str.end());
		dfs(0, "");
		cout << endl;
	}	
}

