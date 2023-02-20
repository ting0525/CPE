#include<bits/stdc++.h>
using namespace std;

int main(){
    int test, n, Case = 0;
    char graph[110][110]; //�� 
    cin >> test;  //����� 
    while(test--) {
        cin >> n; //�Ϫ��j�p 
        for(int i = 0; i < n; i++){  //�ع� 
        	for(int j = 0; j < n; j++){
        		cin >> graph[i][j];
			}
		}
        int dp[105][105] = {0};
        for(int i = n-1; i >= 0; i--){    //�̤U����row 
            for(int j = 0; j < n; j++){   //�̥��䪺column 
                if(graph[i][j] == 'W'){   //��Xw�üаO (�s��w���ϥ�dp������) 
                    dp[i][j] = 1;       
                    continue;
                }
                if(graph[i][j] == 'B') continue;
                
                if(i+1 < n && j+1 < n && graph[i+1][j+1] != 'B') //�S�W�X���&&���}�I���OB 
                    dp[i][j] += dp[i+1][j+1];
                if(i+1 < n && j-1 >= 0 && graph[i+1][j-1] != 'B') //�S�W�X���&&���}�I���OB
                    dp[i][j] += dp[i+1][j-1];
                if(i+1 < n && j+1 < n && graph[i+1][j+1] == 'B') { //�S�W�X���&&���}�I�OB
                    if(i+2 < n && j+2 < n && graph[i+2][j+2] != 'B')  //�u����S�W�X���&&���}�I���OB 
                        dp[i][j] += dp[i+2][j+2];
                }
                if(i+1 < n && j-1 >= 0 && graph[i+1][j-1] == 'B') { //�S�W�X���&&���}�I�OB 
                    if(i+2 < n && j-2 >= 0 && graph[i+2][j-2] != 'B') //�u����S�W�X���&&���}�I���OB 
                        dp[i][j] += dp[i+2][j-2];
                }
                dp[i][j] %= 1000007;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
            if(graph[0][i] != 'B') //����̳� row 
                ans += dp[0][i], ans %= 1000007;
        printf("Case %d: %d\n", ++Case, ans);
    }
    return 0;
}
