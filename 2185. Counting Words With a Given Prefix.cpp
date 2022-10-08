class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len=words.size();
        int slen=pref.length();
        int cnt=0;
        for(int i=0;i<len;i++){       
            string str=words[i];     //�N�r��ը��X 
            int j=0;
            int k=0;
            while(j<slen && k<str.size()){  //���}�Y 
                if(pref[j] == str[k]){
                    j++;
                    k++;
                }
                else{
                    break;
                }
            }
            if(j==slen) 
                cnt++;
        }
        return cnt;
    }
};
