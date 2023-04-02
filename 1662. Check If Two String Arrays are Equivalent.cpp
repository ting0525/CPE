class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "";
        string w2 = "";
        for(int i = 0; i < word1.size(); i++){
            w1 += word1[i];
        }
        for(int j = 0; j < word2.size(); j++){
            w2 += word2[j];
        }
        if(w1 == w2) return true;
        return false;
    }
};
