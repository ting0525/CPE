class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;                       
        for(int i=0;i<nums.size();i++){    //�ϥΨ�Ӱj�����j�p 
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
