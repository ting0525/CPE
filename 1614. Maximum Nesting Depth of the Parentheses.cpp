class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,Max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){     //�J�쥪�A���N�`��+1 
                cnt++;
                if(Max<cnt){
                    Max=cnt;
                }
            }
            if(s[i]==')'){  //�J��k�A���`��-1 
                cnt--;
            }
        }
        return Max;
    }
};
