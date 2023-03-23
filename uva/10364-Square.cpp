#include<bits/stdc++.h>
using namespace std;

int edge_count;
int edge[10000];

bool cmp(int a, int b){
	return a > b;
}

bool dfs(int each_edge, bool used[], int finish, int now_len, int start){
	if(finish == 3) return true;
	
	if(now_len == each_edge){
		if(dfs(each_edge, used, finish+1, 0, 0)) return true;
	}
	
	for(int i = start; i < edge_count; i++){
		if(!used[i] && now_len+edge[i] <= each_edge){
			used[i] = true;	
			if(dfs(each_edge, used, finish, now_len+edge[i], i+1)) return true;
			else used[i] = false;
		} 	
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		bool used[10000] = {0};
		memset(edge, 0, sizeof(edge));
		int Max = -1, sum = 0;
		cin >> edge_count;
		for(int i = 0; i < edge_count; i++){
			cin >> edge[i];
			Max = max(Max, edge[i]);
			sum += edge[i];
		}
		if(sum%4 != 0){
			cout << "no" << endl;
			continue;	
		} 
		else if(Max > sum/4){
			cout << "no" << endl;
			continue;	
		} 
		sort(edge, edge+edge_count, cmp);
		
		if(dfs(sum/4, used, 0, 0, 0)) cout << "yes" << endl;
		else cout << "no" << endl;
	}	
} 
