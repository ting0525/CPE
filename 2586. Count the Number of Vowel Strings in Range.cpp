class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i = left; i <= right; i++){
            if(words[i][0] == 'a'){
                if(words[i][words[i].size()-1] == 'a') count++;
                else if(words[i][words[i].size()-1] == 'e') count++;
                else if(words[i][words[i].size()-1] == 'i') count++;
                else if(words[i][words[i].size()-1] == 'o') count++;
                else if(words[i][words[i].size()-1] == 'u') count++;
            }
            
            else if(words[i][0] == 'e'){
                if(words[i][words[i].size()-1] == 'a') count++;
                else if(words[i][words[i].size()-1] == 'e') count++;
                else if(words[i][words[i].size()-1] == 'i') count++;
                else if(words[i][words[i].size()-1] == 'o') count++;
                else if(words[i][words[i].size()-1] == 'u') count++;
            }
            
            else if(words[i][0] == 'i'){
                if(words[i][words[i].size()-1] == 'a') count++;
                else if(words[i][words[i].size()-1] == 'e') count++;
                else if(words[i][words[i].size()-1] == 'i') count++;
                else if(words[i][words[i].size()-1] == 'o') count++;
                else if(words[i][words[i].size()-1] == 'u') count++;
            }
            
            else if(words[i][0] == 'o'){
                if(words[i][words[i].size()-1] == 'a') count++;
                else if(words[i][words[i].size()-1] == 'e') count++;
                else if(words[i][words[i].size()-1] == 'i') count++;
                else if(words[i][words[i].size()-1] == 'o') count++;
                else if(words[i][words[i].size()-1] == 'u') count++;
            }
            
            else if(words[i][0] == 'u'){
                if(words[i][words[i].size()-1] == 'a') count++;
                else if(words[i][words[i].size()-1] == 'e') count++;
                else if(words[i][words[i].size()-1] == 'i') count++;
                else if(words[i][words[i].size()-1] == 'o') count++;
                else if(words[i][words[i].size()-1] == 'u') count++;
            }
            
        }
        return count;
    }
};
