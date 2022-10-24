class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2, 0);
        vector<int> cnt(nums.size(),0);//7
        int num=0;
        for (int i=0;i<nums.size();i++){//1-7
            num=nums[i];
            cnt[num-1]++;
        } 
            
        for (int i = 0; i < cnt.size(); ++i) {
            if (res[0] != 0 && res[1] != 0) return res;
            if (cnt[i] == 2) res[0] = i + 1;
            else if (cnt[i] == 0) res[1] = i + 1;
        }
        return res;
    }
};
