#include<bits/stdc++.h>
using namespace std;

int main(){
    int test, n, Case = 0;
    char graph[110][110]; //圖 
    cin >> test;  //測資數 
    while(test--) {
        cin >> n; //圖的大小 
        for(int i = 0; i < n; i++){  //建圖 
        	for(int j = 0; j < n; j++){
        		cin >> graph[i][j];
			}
		}
        int dp[105][105] = {0};
        for(int i = n-1; i >= 0; i--){    //最下面的row 
            for(int j = 0; j < n; j++){   //最左邊的column 
                if(graph[i][j] == 'W'){   //找出w並標記 (連到w的使用dp做紀錄) 
                    dp[i][j] = 1;       
                    continue;
                }
                if(graph[i][j] == 'B') continue;
                
                if(i+1 < n && j+1 < n && graph[i+1][j+1] != 'B') //沒超出邊界&&落腳點不是B 
                    dp[i][j] += dp[i+1][j+1];
                if(i+1 < n && j-1 >= 0 && graph[i+1][j-1] != 'B') //沒超出邊界&&落腳點不是B
                    dp[i][j] += dp[i+1][j-1];
                if(i+1 < n && j+1 < n && graph[i+1][j+1] == 'B') { //沒超出邊界&&落腳點是B
                    if(i+2 < n && j+2 < n && graph[i+2][j+2] != 'B')  //彈跳後沒超出邊界&&落腳點不是B 
                        dp[i][j] += dp[i+2][j+2];
                }
                if(i+1 < n && j-1 >= 0 && graph[i+1][j-1] == 'B') { //沒超出邊界&&落腳點是B 
                    if(i+2 < n && j-2 >= 0 && graph[i+2][j-2] != 'B') //彈跳後沒超出邊界&&落腳點不是B 
                        dp[i][j] += dp[i+2][j-2];
                }
                dp[i][j] %= 1000007;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
            if(graph[0][i] != 'B') //結算最頂 row 
                ans += dp[0][i], ans %= 1000007;
        printf("Case %d: %d\n", ++Case, ans);
    }
    return 0;
}
