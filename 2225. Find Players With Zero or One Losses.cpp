class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        vector<vector<int>> res(2); //���׳]��2 
        
        for (auto it : matches){  
            mp[it[0]] = mp[it[0]]; //�Ĥ@���J�쪺�ȥ[�Jmap ��N���J�쪺�Ȭ���lose���� 
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
