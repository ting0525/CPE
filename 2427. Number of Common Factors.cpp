class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        for(int i=1;i<=max(a,b);i++){   //�q1~(a�Bb���j��) 
            if(a%i==0 && b%i==0){       //�Y����㰣�N�����]�� 
                cnt++;
            }
        }
        return cnt;  //�^�Ǥ��]���`�� 
    }
};
