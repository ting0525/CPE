#include <iostream>
using namespace std;
int main(){
	int len,num=1,sum=0;
	while(cin>>len&&len!=0){ 
		sum=0;
		num=1;
		while(len>0){
			sum+=num*num;
			num++;
			len--;
		}
		cout<<sum<<endl;
	} 
}
