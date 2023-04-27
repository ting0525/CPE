class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int index = 0;
        for(int i = num.size()-1; i >= 0; i--){
            if((num[i]-'0')%2 == 1){
                index = i;
                break;
            }
        }
        if((num[index]-'0')%2 == 0) return "";
        for(int i = 0; i <= index; i++){
            ans += num[i];
        }
        return ans;
    }
};
