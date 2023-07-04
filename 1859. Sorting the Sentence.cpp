class Solution {
public:
    string sortSentence(string s) {
        map<int, string> str;
        int start = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '1' && s[i] <= '9'){
                str[s[i]-'0'-1] = s.substr(start, i-start);
                start = i+2;
            }
        }
        string combin = "";
        for(auto i : str){
            combin += i.second;
            combin += " ";
        }
        combin.pop_back();
        return combin;
    }
};
