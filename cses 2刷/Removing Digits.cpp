#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, num = 0;
	cin>>n;
	vector<int> dp(n+1, 1e9);
	
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		num = i;
		while(num){
			dp[i] = min(dp[i] , dp[i-(num%10)]+1);
			num /= 10;
		}
	}	
	cout << dp[n];
}
