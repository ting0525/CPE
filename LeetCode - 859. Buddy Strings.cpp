class Solution {
public:
    public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size())                //���P�_���׬O�_�@�� 
            return false;
        int first = -1, counts[128] = {};
        bool swappable = false;
        for (int i = 0; i != A.size(); ++i) {
            if (A[i] != B[i]) {                 //first==-1���Ĥ@����줣�@��  ���ĤG�������L��first���洫  
                if (first == -1)
                    first = i;
                else {
                    swap(A[first], A[i]);
                    return A == B;
                }
            }
            if (counts[A[i]])        //�P�_�r��ۦP�����p�U���S���P�@�Ӧr���X�{�⦸ 
                swappable = true;
            ++counts[A[i]];
        }
        return first == -1 && swappable;
    }
