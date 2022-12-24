class Solution {
public:
    
    int reverse(int x) {
        long long int ans=0;
        bool flag=true;
        long long int num=x;
        if(x<0){
            flag=false;
            num = num*(-1);
        }
        while(num>0){
            ans = ans*10+num%10;
            num /= 10;
        }
        if(flag==false){
            ans *= -1;
        }
        if(ans>INT_MAX || ans <INT_MIN) return 0;
        return ans;
    }
};
