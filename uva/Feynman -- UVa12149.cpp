#include <iostream>
using namespace std;
int main(){
	int len,num=1,sum=0;
	while(cin>>len&&len!=0){ 
		sum=0;
		num=1;
		while(len>0){
			sum+=num*num;//hint:�q�j��p�}�l��  4*4�����= 4*4->1(1*1) 3*3->4(2*2) 2*2->9(3*3) .... 
			num++;
			len--;
		}
		cout<<sum<<endl;
	} 
}
