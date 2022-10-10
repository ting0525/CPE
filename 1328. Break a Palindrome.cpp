class Solution {
public:
    string breakPalindrome(string str) {
        int len=str.size(); //字串長度 
        int change=0;       //要更改的位置 
        bool ischange=0;    //是否更改過(此題只需更改一次 且至少一次) 
        if(len==1 || len==0) //字串長度為0 or 1時eturn 空格 
            return "";
        for(int i=0;i<len/2;i++){   //注意字串若為奇數 中央值不用改 
            if(str[i]>'a'){         //第一個不是a的改掉 
                change=i;
                ischange=1;
                break;
            }
        }
        if(ischange==1)
            str[change]='a';
        else if(ischange==0)  //如果都沒更改過 把最後一位改成b 
            str[len-1]='b';
        return str;
    }
};
