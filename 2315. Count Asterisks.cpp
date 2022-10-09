class Solution {
public:
    int countAsterisks(string s) {
        int len=s.size();
        bool t=false;
        int star=0;
        for(int i=0;i<len;i++){
            if(s[i]=='*' && t==false){  //不再框內才計次 
                star++;
            }
            if(s[i]=='|' &&　t==false){ //第一個框 
                t=true;
            }
            else if(s[i]=='|' && t==true){   //第二個框 
                t=false;
            }
        }
        return star;
    }
};
