/*
�Ҧ��_�Ƴ��i�H�s�������ʨ�����L�_�Ƨ��СC
�Ҧ����Ƴ��i�H�s�������ʨ�����L���Ƨ��СC
*/class Solution {
public:
	int minCostToMoveChips(vector<int>& nums) {
		int odd=0;
		int even=0;
		for(int num:nums){  //�M��vector ���odd���٬Oeven�� 
			if(num%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
		if(odd==0 || even==0){
			return 0;
		}
		return min(odd,even);
	}
};
