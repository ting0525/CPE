class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,Max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){     //遇到左括號就深度+1 
                cnt++;
                if(Max<cnt){
                    Max=cnt;
                }
            }
            if(s[i]==')'){  //遇到右括號深度-1 
                cnt--;
            }
        }
        return Max;
    }
};
