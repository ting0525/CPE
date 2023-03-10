class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max_profit = 0;
        int Min_price = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            Min_price = min(Min_price, prices[i]);
            Max_profit = max(Max_profit, prices[i]-Min_price);
        }
        return Max_profit;
    }
};
