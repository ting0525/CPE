class Solution {
public:
    vector<char> reverseString(vector<char>& s){
        int tmp=0;
        int len=s.size();
        for(int i=0;i<len/2;i++){  
            tmp=s[i];          //�q�Y���}�l����(�洫)�Ӥw 
            s[i]=s[len-1-i];
            s[len-1-i]=tmp;
        }
        return s;
    }
};
