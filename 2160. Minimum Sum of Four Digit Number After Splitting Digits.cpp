class Solution {
public:
    int minimumSum(int num) {
        int sum=0;
        vector<int> v;
        while(num!=0){           //计╊秆 
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());//逼 
        sum=v[0]*10+v[2]+v[1]*10+v[3];//讽计 讽计 癬ㄓ穦程 
        return sum;
    }
};
