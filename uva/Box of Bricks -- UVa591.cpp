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
			sum=sum+a;        //���[�` 
			num.push_back(a); //�s�J�ƭ� 
		}
		sum/=cnt;
		for(int i=0;i<num.size();i++){
			total+=abs(sum-num[i]);  //��X�C���������h��  
		}
		total/=2; //�h�����ƭp�⪺���� 
		printf("Set #%d\n" , title++);
		printf("The minimum number of moves is %d.\n" , total++);
	} 
} 
