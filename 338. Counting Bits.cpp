class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){   //n:0~目標數字  
            int cnt=0;
            for(int bit=31;bit>=0;bit--){  //以遮罩方式做AND 來判斷為是否為1 並以迴圈run整個數 31~0共32個為 int 範圍
                int mask=1<<bit;           //(用AND可以就可以不用做進制轉換)            (其實也可以從30因為正整數第 一個為0) 
                if((mask&i)>0){ 
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
/*
?0000000 00000000 00000000 00000000
&0000000 00000000 00000000 00000000
?0000000 00000000 00000000 00000000

0?000000 00000000 00000000 00000000
0&000000 00000000 00000000 00000000
0?000000 00000000 00000000 00000000

00?00000 00000000 00000000 00000000
00&00000 00000000 00000000 00000000
00?00000 00000000 00000000 00000000

000?0000 00000000 00000000 00000000
000&0000 00000000 00000000 00000000
000?0000 00000000 00000000 00000000
*/ 
