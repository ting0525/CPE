class Solution {
public:
    char findTheDifference(string s, string t) {
        int ss = 0; 
        int tt = 0;
        for(int i = 0; i < s.size(); i++){
            ss += s[i]-'a';
            tt += t[i]-'a';
        }
        tt += t[t.size()-1]-'a';
        return char(tt-ss+'a');
    }
};
