class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if (len < 3)       //���פp��T�����D�N 
            return false;

        int first = INT_MAX;
        int second = INT_MAX;
        
        for (int i = 0; i < len; ++i){
            if (first >= nums[i])    //���ۧ�̤p���� 
                first = nums[i];
            else if (second >= nums[i]) //���ۧ�ĤG�p���� 
                second = nums[i];
            else                 //���ۧ�ĤT�p���� 
                return true;
        }
        
        return false;
    }
};
