class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0;
        if((word[0] >= 'A' && word[0] <= 'Z') && (word[1] >= 'A' && word[1] <= 'Z')){ //全大寫
            flag = 1;
        }
        else if((word[0] >= 'A' && word[0] <= 'Z') && (word[1] < 'A' || word[1] > 'Z')){ //開頭大寫
            flag = 2;
        }
        else if((word[0] < 'A' || word[0] > 'Z') && (word[1] < 'A' || word[1] > 'Z')){ //全小寫
            flag = 3;
        }
        else return false;

        switch(flag){
            case 1:
                for(int i = 0;i < word.size();i++){
                    if(word[i] < 'A' || word[i] > 'Z'){
                        return false;
                    }
                }
                break;

            case 2:
                for(int i = 1;i < word.size();i++){
                    if(word[i] >= 'A' && word[i] <= 'Z'){
                        return false;
                    }
                }
                break;

            case 3:
                for(int i = 0;i < word.size();i++){
                    if(word[i] >= 'A' && word[i] <= 'Z'){
                        return false;
                    }
                }
                break;
            
        }
        return true;
    }
};
