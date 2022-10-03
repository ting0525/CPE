class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        for(int i=1;i<=max(a,b);i++){   //從1~(a、b較大者) 
            if(a%i==0 && b%i==0){       //若都能整除就為公因數 
                cnt++;
            }
        }
        return cnt;  //回傳公因數總數 
    }
};
