class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        vector<vector<int>> res(2); //長度設為2 
        
        for (auto it : matches){  
            mp[it[0]] = mp[it[0]]; //第一次遇到的值加入map 第N次遇到的值紀錄lose次數 
            mp[it[1]]++;
        }
        
        for (auto it : mp) {
            if (it.second == 0) {
                res[0].push_back(it.first);
            } else if (it.second == 1){
                res[1].push_back(it.first);
            }
        }
        
        return res;
    }
};
