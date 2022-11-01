/*
┮Τ计常箂Θセ簿笆ヴㄤ计Г夹
┮Τ案计常箂Θセ簿笆ヴㄤ案计Г夹
*/class Solution {
public:
	int minCostToMoveChips(vector<int>& nums) {
		int odd=0;
		int even=0;
		for(int num:nums){  //筂菌vector тㄆoddぶ临琌evenぶ 
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
