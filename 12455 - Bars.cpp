#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, target, num, p;
    cin >> t;
    while(t--){
        cin >> target >> num;
        vector<int> dp(1010);
        dp[0] = 1;
        for(int i = 0; i < num; i++){
            cin >> p;
            for(int j = target-p; j >= 0; j--){
                if(dp[j] && !dp[j+p]){
                	cout << j+p << endl; 
                    dp[j+p] = 1;
				}	
            }
        }
        if(dp[target]) cout << "YES\n";
        else cout << "NO\n";
    }
}

