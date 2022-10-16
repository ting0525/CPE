#include<iostream>
#include<vector>
using namespace std;
int main(){
	int cnt,sum=0,total=0,title=1;
	int a;
	while(cin>>cnt){ 
		sum=0;
		total=0;
		vector<int> num;
		if(cnt==0){
			return 0;
		}
		for(int i=0;i<cnt;i++){
			cin>>a;
			sum=sum+a;        //做加總 
			num.push_back(a); //存入數值 
		}
		sum/=cnt;
		for(int i=0;i<num.size();i++){
			total+=abs(sum-num[i]);  //算出每行離平均多少  
		}
		total/=2; //去掉重複計算的部分 
		printf("Set #%d\n" , title++);
		printf("The minimum number of moves is %d.\n" , total++);
	} 
} 
