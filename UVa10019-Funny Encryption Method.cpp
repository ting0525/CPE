#include<iostream>
using namespace std;
int main(){
	int n,x1,x2,count1,count2;
	int hex[16]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4}; //先建表
	cin>>n;
	while(n--){
		cin>>x1;                                    //x1為運算值
		x2=x1;                                     //x2為x1的備份，用於hex運算 
		count1=count2=0;
		while(x1>0){
			count1=count1+x1%2;
			x1/=2; 
		}
		while(x2>0){
			count2=count2+hex[x2%10];
			x2/=10;
		}
		cout<< count1 << " " << count2 << endl;
	}
		 
} 
