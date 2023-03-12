#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int coin[6] = {1, 5, 10, 25, 50};
	long long int dp[30010];
	long long int value;
	while(cin >> value){
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 0; i < 5; i++){
			for(long long int j = 1; j <= value; j++){
				if(j-coin[i] >= 0){
					dp[j] += dp[j-coin[i]];
				}
			}
		}
		if(dp[value] == 1) printf("There is only 1 way to produce %lld cents change.\n", value);
		else printf("There are %lld ways to produce %lld cents change.\n", dp[value], value);
	}
} 

