class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if (len < 3)       //長度小於三不符題意 
            return false;

        int first = INT_MAX;
        int second = INT_MAX;
        
        for (int i = 0; i < len; ++i){
            if (first >= nums[i])    //順著找最小的數 
                first = nums[i];
            else if (second >= nums[i]) //順著找第二小的數 
                second = nums[i];
            else                 //順著找第三小的數 
                return true;
        }
        
        return false;
    }
};
