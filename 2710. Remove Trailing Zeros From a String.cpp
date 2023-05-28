class Solution {
public:
    string removeTrailingZeros(string num){
        int index = num.size()-1;
        cout << num.size()-1 << endl;
        while(index >= 0 && num[index] == '0'){
            index--;
        }      
        return num.substr(0, index+1);
    }
};
