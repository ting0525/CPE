class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end()), ans;
        for(auto i : nums2){
            if(s1.count(i)) ans.insert(i);
        }
        vector<int> ansr(ans.begin(), ans.end());
        return ansr;
    }
};
