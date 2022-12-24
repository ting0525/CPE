class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,last;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') count++;
            else if(s[i]==' '){
                if(count!=0) last=count;
                count=0;
            } 
        }
        if(count!=0) return count;
        else return last;
    }
};
