#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int dp[10000][10000];
int main(){
	int len;
	char tmp;
	cin >> len;
	for(int i = 0; i <= len; i++){
		dp[i][0] = 1;
		dp[0][i] = 1;
	}
	for(int i = 1; i <= len; i++){
		for(int j = 1; j <= len; j++){
			
			cin >> tmp;
			if(tmp == '*') dp[i][j] == 0;
			
			else if(i == 1){
				dp[i][j] += dp[i][j-1];
				dp[i][j] %= mod;
			}
			else if(j == 1){
				dp[i][j] += dp[i-1][j];
				dp[i][j] %= mod;
			}
			else{
				dp[i][j] += dp[i][j-1]+dp[i-1][j];
				dp[i][j] %= mod;
			}
		}
	}
	cout << dp[len][len];
} 
