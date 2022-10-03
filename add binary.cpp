class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int carry=0,i=a.size()-1,j=b.size()-1;
        while(i >= 0 || j >= 0 || carry == 1){
            if(i>=0)
                carry+=a[i--]-'0';
            else
                carry+=0;
            if(j>=0)
                carry+=b[j--]-'0';
            else
                carry+=0;
            s=char(carry%2+'0')+s;
            carry/=2;
        }
        
        return s;
    }
};
