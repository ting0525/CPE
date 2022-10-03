class Solution {
public:
    int numDecodings(string s) {
    	int len=s.size();
    	if(len==0 || s[0]=='0') 
			return 0;
        int pre1 = 1,pre2 = 1;  //0不能連續出現 pre1: 前一次的累積次數  pre2: 前前一次的累積次數
        for(int i = 1;i<len && pre1!=0;i++)  //不會跑到最後一個字
        {
    		int cur = 0;
        	if(s[i]!='0')    //不是0就至少一種 0只有10是合理的
				cur+=pre1;
            if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6'))  //以個位數為中心 在判斷他可不可以跟前面一個合成2位數 
				cur+=pre2;
            pre2 = pre1;
            pre1 = cur;  //經過兩次判斷可篩選出0(且他不能組成10)  
       }
       return pre1;
    }
};

