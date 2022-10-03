class Solution {
public:
    public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size())                //先判斷長度是否一樣 
            return false;
        int first = -1, counts[128] = {};
        bool swappable = false;
        for (int i = 0; i != A.size(); ++i) {
            if (A[i] != B[i]) {                 //first==-1為第一次找到不一樣  找到第二次時讓他跟first做交換  
                if (first == -1)
                    first = i;
                else {
                    swap(A[first], A[i]);
                    return A == B;
                }
            }
            if (counts[A[i]])        //判斷字串相同的狀況下有沒有同一個字元出現兩次 
                swappable = true;
            ++counts[A[i]];
        }
        return first == -1 && swappable;
    }
