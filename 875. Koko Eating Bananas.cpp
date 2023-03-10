class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1e9;
        while (left < right) {
            int mid = left+(right-left)/2;
            int count = 0;
            for (int i : piles){
                count += (i+mid-1)/mid;
            } 
            if (count > h) left = mid+1;
            else right = mid;
        }
        return right;
    }
};4 
