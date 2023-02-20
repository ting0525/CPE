#include<bits/stdc++.h>
using namespace std;

int visit[1010][1010] = {0};
char graph[1010][1010] = {0};
int language[30] = {0};
void dfs(int i, int j){
	visit[i][j] = 1;
	if(graph[i+1][j] == graph[i][j] && !visit[i+1][j]) dfs(i+1, j);
	if(graph[i-1][j] == graph[i][j] && !visit[i-1][j]) dfs(i-1, j);
	if(graph[i][j+1] == graph[i][j] && !visit[i][j+1]) dfs(i, j+1);
	if(graph[i][j-1] == graph[i][j] && !visit[i][j-1]) dfs(i, j-1);
	return;
}

int main(){
	int n , h, w;
	while(cin >> n){
		for(int test = 0; test < n; test++){
			memset(visit, 0, sizeof(visit));
			memset(graph, 0, sizeof(graph));
			memset(language, 0, sizeof(language));
			cin >> h >> w;
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					char tmp;
					cin >> tmp;
					graph[i][j] = tmp;
				}
			}
			printf("World #%d\n", test+1);
			
			int Max = -1;
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					if(visit[i][j] == 0){
						Max = max(Max, ++language[graph[i][j]-'a']);
						dfs(i, j);
					}
				}
			}
			
			for(int i = Max; i > 0; i--){
				for(int j = 0; j < 26; j++){
					if(language[j] == i) printf("%c: %d\n", 'a'+j, i);
				}
			}
		}
	} 
}
