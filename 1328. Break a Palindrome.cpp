class Solution {
public:
    string breakPalindrome(string str) {
        int len=str.size(); //�r����� 
        int change=0;       //�n��諸��m 
        bool ischange=0;    //�O�_���L(���D�u�ݧ��@�� �B�ܤ֤@��) 
        if(len==1 || len==0) //�r����׬�0 or 1��eturn �Ů� 
            return "";
        for(int i=0;i<len/2;i++){   //�`�N�r��Y���_�� �����Ȥ��Χ� 
            if(str[i]>'a'){         //�Ĥ@�Ӥ��Oa���ﱼ 
                change=i;
                ischange=1;
                break;
            }
        }
        if(ischange==1)
            str[change]='a';
        else if(ischange==0)  //�p�G���S���L ��̫�@��令b 
            str[len-1]='b';
        return str;
    }
};
