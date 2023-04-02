class Solution {
public:
   
   
    static bool cmp(pair<char, int> a, pair<char, int> b) {
        return  (a.second == b.second) ? a.first > b.first : a.second < b.second;
    }
    
    vector<pair<int,int>> freq;
    
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size() == 1)  return nums;
        map<char, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto m : mp){
            freq.push_back(m);
        }
        sort(freq.begin(), freq.end(), cmp);
        vector<int> ans;
        for(auto v : freq) {
            for(int i = 0; i < v.second; i++){
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};
