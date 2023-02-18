#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	const int mod = 1e9+7;
	cin >> n;
	vector<long long int> dp(n+10);
	dp[0] = 1;
	for(long long int i = 1; i <= n; i++){
		for(long long int j = 1; j <= 6; j++){
			if(i < j){
				break;
			}
			dp[i] = dp[i]+dp[i-j];
			dp[i] %= mod;
		}
	}
	cout << dp[n] << endl;
} 
 
