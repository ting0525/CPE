class Solution {
public:
    int numDecodings(string s) {
    	int len=s.size();
    	if(len==0 || s[0]=='0') 
			return 0;
        int pre1 = 1,pre2 = 1;  //0����s��X�{ pre1: �e�@�����ֿn����  pre2: �e�e�@�����ֿn����
        for(int i = 1;i<len && pre1!=0;i++)  //���|�]��̫�@�Ӧr
        {
    		int cur = 0;
        	if(s[i]!='0')    //���O0�N�ܤ֤@�� 0�u��10�O�X�z��
				cur+=pre1;
            if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6'))  //�H�Ӧ�Ƭ����� �b�P�_�L�i���i�H��e���@�ӦX��2��� 
				cur+=pre2;
            pre2 = pre1;
            pre1 = cur;  //�g�L�⦸�P�_�i�z��X0(�B�L����զ�10)  
       }
       return pre1;
    }
};

