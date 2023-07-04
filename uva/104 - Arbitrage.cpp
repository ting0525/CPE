#include<bits/stdc++.h> 
#define N 25
using namespace std;

double dp[N][N][N], path[N][N][N];
int n;

void print_path(int i ,int j , int s){
    if(s == 0){
        printf("%d", i);
        return ;
    }
    print_path(i, path[i][j][s], s-1);
    printf(" %d", j);
    return ;
}

void DP(){
    int s, m;
    for(s = 2; s <= n; s++){
        for(int k = 1; k <= n; k++){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if(dp[i][j][s] < dp[i][k][s-1]*dp[k][j][1]){ 
                        dp[i][j][s] = dp[i][k][s-1]*dp[k][j][1];
                        path[i][j][s] = k;
                    }
                }
            }
        }
        int i;
        for(i = 1; i <= n; i++){
            if(dp[i][i][s] > 1.01){
                m = i;
                break;
            }
        }
        if(i <= n)
            break;
    }
    if(s > n) printf("no arbitrage sequence exists");
    else print_path(m, m, s);
    printf("\n");
}

int main(){
    while(cin >> n){
        memset(dp, 0, sizeof(dp));
        memset(path, 0, sizeof(path));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) dp[i][j][1] = 1;
                else cin >> dp[i][j][1];
                path[i][j][1] = j;
            }
        }
        DP();
    }
    return 0;
}

