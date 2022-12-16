class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnta=0,cntb=0;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                if(i<len/2) cnta++;
                else if(i>=len/2) cntb++;
            }
        }
        
        if(cnta==cntb) return true;
        
        return false;
    
    }
};
