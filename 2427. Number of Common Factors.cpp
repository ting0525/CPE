class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        for(int i=1;i<=max(a,b);i++){   //眖1~(ab耕) 
            if(a%i==0 && b%i==0){       //璝常俱埃碞そ计 
                cnt++;
            }
        }
        return cnt;  //肚そ计羆计 
    }
};
