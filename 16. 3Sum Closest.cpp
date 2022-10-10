class Solution {
 public :
     int threeSumClosest(vector< int >& nums, int target) {
         int ans = nums[ 0 ] + nums[ 1 ] + nums[ 2 ];
         int diff = abs(ans - target);
        sort(nums.begin(), nums.end());
        for ( int i = 0 ; i < nums.size() - 2 ; ++ i) {     //�Hnum[i]���ؼ� �Q��left�Bright�n�дM��̾a��ؼЪ��զX 
             int left = i + 1 , right = nums.size() - 1 ;
             while (left < right) {
                 int sum = nums[i] + nums[left] + nums[right];
                 int tmp_diff = abs(sum - target);
                 if (diff > tmp_diff) {  //������S����񪺵��� 
                    diff = tmp_diff;
                    ans = sum;
                }
                if (sum < target)    //sort�L�F �ҥH�Ӥj�Nleft++ �Ӥp�Nright-- 
					left++;
                else 
				 	right--;
            }
        }
        return ans;
    }
};
