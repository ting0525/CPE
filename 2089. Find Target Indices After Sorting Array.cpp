class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        sort(nums.begin(),nums.end());  //�Ƨ� 
        for(int i=0;i<nums.size();i++){   
            if(nums[i]==target){       //�p�G��ؼФ@�˧�vector��m�O�U��push�ivector v 
                v.push_back(i);
            }
        }
        return v;
    }
};
