class Solution {
public:
    string makeSmallestPalindrome(string s){
        int len = s.size();
        int i = 0, j = len-1;
        while(i <= len/2){
            s[j] = min(s[i], s[j]);
            s[i] = s[j];
            i++;
            j--;
        }
        return s;
    }
};
