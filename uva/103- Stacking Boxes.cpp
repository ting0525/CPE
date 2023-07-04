#include<bits/stdc++.h>
using namespace std;

int n, m;
int dp[50], path[50], graph[50][50];
int ans, pre;

struct Box{
	int edge[50];
}box[50];

bool is_include(int i, int j){
	for(int k = 0; k < m; k++){
		if(box[i].edge[k] <= box[j].edge[k]) return 0;
	}
	return 1;
}

void dfs(int i){
	if(dp[i] != -1) return ;
	dp[i] = 1;
	
	for(int j = 1; j <= n; j++){ 
        if(graph[i][j]){
            dfs(j);
            if(dp[j]+1 > dp[i]){ 
                dp[i] = dp[j]+1;
                path[i] = j;
            }
        }
    } 
    if(dp[i] > ans){
        ans = dp[i];
        pre = i;
    }
    return ;
}


int main(){
	while(cin >> n >> m){
		//¿é¤J 
		for(int i = 1; i <= n; i++){
			for(int j = 0; j < m; j++){
				cin >> box[i].edge[j];
			}
		}
		//±Æ§Ç¤¸¯À 
		for(int i = 1; i <= n; i++){
			sort(box[i].edge, box[i].edge+m);
		}
		
		memset(graph, 0, sizeof(graph));
        memset(dp, -1, sizeof(dp));
        memset(path, -1, sizeof(path));
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(is_include(i, j)) graph[i][j] = 1;
			}
		}
		
		ans = -1;
		pre = 0;
        for(int i = 1; i <= n; i++){ 
            if(dp[i] == -1) dfs(i);
		}
		
		cout << ans << endl;
        int s[50], top;
        memset(s, 0, sizeof(s));
        top = -1;
        while(pre != -1){  
            s[++top] = pre;
            pre = path[pre];
        }
        for(int i = top; i >= 0; i--){   
            if(i > 0) printf("%d ", s[i]);
            else printf("%d", s[i]);
        } 
        printf("\n");
    }
    return 0;
		
}











