class Solution {
public:
    int countAsterisks(string s) {
        int len=s.size();
        bool t=false;
        int star=0;
        for(int i=0;i<len;i++){
            if(s[i]=='*' && t==false){  //���A�ؤ��~�p�� 
                star++;
            }
            if(s[i]=='|' &&�@t==false){ //�Ĥ@�Ӯ� 
                t=true;
            }
            else if(s[i]=='|' && t==true){   //�ĤG�Ӯ� 
                t=false;
            }
        }
        return star;
    }
};
