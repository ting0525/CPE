#include<iostream>
using namespace std;
int main(){
	int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};  //每個月日期數 
	string week[8]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; //week 
	int cnt;
	int m,d,day; //day:經過多少天  
	cin>>cnt;
	while(cnt--){
		day=0;
		cin>>m>>d;
		for(int i=0;i<m;i++){
			day=day+month[i];
		}
		day=day+d+4;  //由測資推得1/1為Saturday 
		day=day%7;
		cout<<week[day]<<endl;
	}
} 
