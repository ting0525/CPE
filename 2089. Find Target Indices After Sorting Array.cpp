class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        sort(nums.begin(),nums.end());  //排序 
        for(int i=0;i<nums.size();i++){   
            if(nums[i]==target){       //如果跟目標一樣把vector位置記下來push進vector v 
                v.push_back(i);
            }
        }
        return v;
    }
};
