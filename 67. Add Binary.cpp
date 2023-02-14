class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.size()-1;
        int lenb = b.size()-1;
        int carry = 0;
        string res = "";
        while(lena >= 0 || lenb >= 0 || carry){
            if(lena >= 0){
                carry += a[lena]-'0';
                lena--;
            }
            if(lenb >= 0){
                carry += b[lenb]-'0';
                lenb--;
            }
            res += (carry % 2 + '0');
            carry /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
