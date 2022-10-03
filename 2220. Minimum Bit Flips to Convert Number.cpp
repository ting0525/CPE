class Solution {
public:
    int minBitFlips(int start, int goal) {
        int start_b[10000]={0},goal_b[10000]={0},len1=0,len2=0,cnt=0;
        if(start<goal)
            swap(start,goal);
        for(int i=0;start>0;i++){
            start_b[i]=start%2;
            start/=2;
            len1++;
        }
        for(int i=0;goal>0;i++){
            goal_b[i]=goal%2;
            goal/=2;
            len2++;
        }
        for(int i=0;i<max(len1,len2);i++){
            if(start_b[i]!=goal_b[i]){
                cnt++;
            }
        }
        return cnt;

    }
};
