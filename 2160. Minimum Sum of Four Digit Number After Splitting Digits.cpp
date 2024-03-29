class Solution {
public:
    int minimumSum(int num) {
        int sum=0;
        vector<int> v;
        while(num!=0){           //數字拆解 
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());//排序 
        sum=v[0]*10+v[2]+v[1]*10+v[3];//小的當十位數 大的當個位數 加起來會最小 
        return sum;
    }
};
