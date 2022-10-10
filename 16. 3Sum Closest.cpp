class Solution {
 public :
     int threeSumClosest(vector< int >& nums, int target) {
         int ans = nums[ 0 ] + nums[ 1 ] + nums[ 2 ];
         int diff = abs(ans - target);
        sort(nums.begin(), nums.end());
        for ( int i = 0 ; i < nums.size() - 2 ; ++ i) {     //以num[i]為目標 利用left、right駐標尋找最靠近目標的組合 
             int left = i + 1 , right = nums.size() - 1 ;
             while (left < right) {
                 int sum = nums[i] + nums[left] + nums[right];
                 int tmp_diff = abs(sum - target);
                 if (diff > tmp_diff) {  //比較有沒有更近的答案 
                    diff = tmp_diff;
                    ans = sum;
                }
                if (sum < target)    //sort過了 所以太大就left++ 太小就right-- 
					left++;
                else 
				 	right--;
            }
        }
        return ans;
    }
};
