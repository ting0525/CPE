#include<bits/stdc++.h>
using namespace std;
  
vector<int> dp(100000), price(100000), page(100000);
//int dp[100000],price[100000],page[100000];
int main() {
	int book_number, my_money;
    cin >> book_number >> my_money;
    
    for(int i = 0; i < book_number; i++){
    	cin >> price[i];
    }
    for(int i = 0; i < book_number; i++){
        
		cin >> page[i]; 
        for(int j = my_money; j >= price[i]; j--){
            dp[j] = max(dp[j] , dp[j-price[i]]+page[i]);
        }
    }
    cout << dp[my_money];
}
