#include<iostream>
using namespace std;
int main(){
	int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};  //�C�Ӥ����� 
	string week[8]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; //week 
	int cnt;
	int m,d,day; //day:�g�L�h�֤�  
	cin>>cnt;
	while(cnt--){
		day=0;
		cin>>m>>d;
		for(int i=0;i<m;i++){
			day=day+month[i];
		}
		day=day+d+4;  //�Ѵ�����o1/1��Saturday 
		day=day%7;
		cout<<week[day]<<endl;
	}
} 
