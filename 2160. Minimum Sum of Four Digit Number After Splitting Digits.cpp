class Solution {
public:
    int minimumSum(int num) {
        int sum=0;
        vector<int> v;
        while(num!=0){           //�Ʀr��� 
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());//�Ƨ� 
        sum=v[0]*10+v[2]+v[1]*10+v[3];//�p����Q��� �j����Ӧ�� �[�_�ӷ|�̤p 
        return sum;
    }
};
