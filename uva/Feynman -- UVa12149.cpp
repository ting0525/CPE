#include <iostream>
using namespace std;
int main(){
	int len,num=1,sum=0;
	while(cin>>len&&len!=0){ 
		sum=0;
		num=1;
		while(len>0){
			sum+=num*num;//hint:從大到小開始做  4*4的方形= 4*4->1(1*1) 3*3->4(2*2) 2*2->9(3*3) .... 
			num++;
			len--;
		}
		cout<<sum<<endl;
	} 
}
